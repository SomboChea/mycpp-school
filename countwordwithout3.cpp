#include <iostream>
using namespace std;

int main(){

//Start code;
int c,nc=0;
while((c=cin.get())!='0')
{
 if(c!='\n' && c!=' ' && c!='\t')
    nc++;
}
cout << "Number of Characters : "<<nc<<endl;
//End code;

}
