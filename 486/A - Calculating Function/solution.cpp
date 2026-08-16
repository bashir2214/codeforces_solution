#include <iostream>
using namespace std;
int main() {
  long long n;
   long long f = 0;
   cin>>n;
   
    if(n%2!=0){
      f = -((n/2)+1);  
    }  
    else if(n%2==0){
        f = n/2;
    }
   
   
   cout<<f;
    
}