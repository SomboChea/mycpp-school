#include <iostream>

//using namespace std;

struct People {
char* name;
int id;
};

void print();
int Sum(int,int);
void printline();

int main(){
int a,b;
std::cout<<"Enter A: ";std::cin>>a;
std::cout<<"Enter B: ";std::cin>>b;
std::cout<<"\n";
printline();
std::cout<<"Sum A + B : "<<Sum(a,b)<<std::endl; 
printline();

struct People p[100];
std::cout<<"Enter name: ";std::cin>>p[1].name;
std::cout<<"Enter id: ";std::cin>>p[1].id;
return 0;
}

int Sum(int a,int b){

return a+b;
}

void printline(void){
for(int i=0;i<=23;i++){
 std::cout<<"-";
}
std::cout<<"\n";

}
