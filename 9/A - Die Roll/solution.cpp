#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
   int y ,w;
   cin>>y>>w;
   int mx;
   
   if(y==1&&w==1){
       cout<<"1/1";
   }
   
   else if(y>=w){
       mx = (6-y)+1;
       if(6%mx==0){
           cout<<"1/"<<6/mx;
       }
       else if(mx==4){
           cout<<"2/3";
       }
       else{
           cout<<mx<<"/6";
       }
   }
   else if(y<w){
       mx = (6-w)+1;
       if(6%mx==0){
           cout<<"1/"<<6/mx;
       }
       else if(mx==4){
           cout<<"2/3";
       }
       else{
           cout<<mx<<"/6";
       }
   }
}