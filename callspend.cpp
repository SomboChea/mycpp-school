#include <iostream>
using namespace std;

int main(){

//Start code;
int call;
float spent = 0;
cout<<"Enter n Call: ";cin>>call;

if(call<=100 && call>0){
 spent = 8;
}else if(call>100 && call<=200){
 spent = 8 + (0.06*(call-100));
}else if(call>200){
 spent = 8 + (0.06*100) + (0.04*(call-200));
}else{
 spent = 0;
}
cout << "Amount of spent : $"<<spent<<endl;
//End code;

return 0;
}
