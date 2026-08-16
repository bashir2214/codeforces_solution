#include <iostream>
using namespace std;
int main() {
   int n,h;
   cin>>n>>h;
   int width=0;
   for(int i=0;i<n;i++){
       int input;
       cin>>input;
       if(input<=h){
           width = width+1;
       }
       else{
           width = width+2;
       }
   }
   cout<<width;
}