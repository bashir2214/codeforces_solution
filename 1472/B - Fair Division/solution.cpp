#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
       int m;
       
       int count = 0;
       int count1 = 0, count2 = 0;
       cin>>m;
      for(int i=0;i<m;i++){
         int input;
         cin>>input;
         count = count+input;
         if(input==1){
             count1++;
         }
         else{
             count2++;
         }
      }
      if(count%2==0){
          if(count2%2==0){
      cout<<"YES"<<endl;    
      }
      else if(count1==0&&count2%2!=0){
          cout<<"NO"<<endl;
      }
      else if(count1%2==0){
          cout<<"YES"<<endl;
      }
      else{
          cout<<"NO"<<endl;
      }
   }
   else{
       cout<<"NO"<<endl;
   }
   }
    return 0;
}