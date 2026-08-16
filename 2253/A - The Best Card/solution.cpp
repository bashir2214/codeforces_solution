#include <iostream>
#include <cmath>
using namespace std;
 
int main() 
{
  int n;
  cin>>n;
  while(n>0){
  int x;
  cin>>x;
  bool flag = true;
  for(int i=2;i<=sqrt(x+1);i++){
    if((x+1)%i==0){
        flag = false;
        break; 
  } 
}
if(x<3||flag == true){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
   n--; 
  }
  return 0;
}