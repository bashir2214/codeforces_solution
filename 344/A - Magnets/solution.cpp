#include <iostream>
using namespace std;
int main() {
   int n;
   int m = 1;
   cin>>n;
   int input[n]={};
   for(int i=0;i<n;i++){
       cin>>input[i];
   }
   for(int i=1;i<n;i++){
       
       if(input[i-1]!=input[i]){
         m = m+1;  
       }
   }
   cout<<m;
}