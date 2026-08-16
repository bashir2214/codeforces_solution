#include <iostream>
using namespace std;
int main() {
   long long n;
  int count=0;
  cin>>n;
  while(n>10){
      int a = n%10;
      if(a==7||a==4){
          count=count+1;
         
      }
       n = n/10;
  }
  
  if(n<10&&(n==7||n==4)){
      count=count+1; 
  }
  while(count>10){
      int b = count%10;
      if(b!=4&&b!=7){
          cout<<"NO";
      break;    
      }
      count = count/10;
  }
  
  if(count<10&&(count==4||count==7)){
      cout<<"YES";
  }
  else if(count<10&&(count!=4&&count!=7)){
      cout<<"NO";
  }
  
   }
    