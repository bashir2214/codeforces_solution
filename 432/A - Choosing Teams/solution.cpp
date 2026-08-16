#include <iostream>
using namespace std;
int main() {
   int n,k;
   cin>>n>>k;
    int teams=0;
   for(int i=0;i<n;i++){
       int input;
      
       cin>>input;
       if((input+k)<=5){
          teams++;
       }
       }
   cout<<teams/3;
}