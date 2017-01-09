#include <iostream>
using namespace std;

int main(){
int IN, OUT=0;
int c,nl,nw,nc,state;
state =OUT;
nl = nw = nc = 0;
while((c=cin.get())!='0')
{
  nc++;
  if(c=='\n')
	nl++;
  if(c==' ' || c=='\n' || c=='\t')
	state=OUT;
  else if(state=OUT&&c!='0')
  {
	state=IN;
	nw++;
  }
}
cout<<"Number of Line:"<<nl<<endl;
cout<<"Number of Word:"<<nw<<endl;
cout<<"Number of Charactor:"<<nc<<endl;
return 0;
}
