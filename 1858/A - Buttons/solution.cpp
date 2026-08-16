#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
       int a,b,c;
       cin>>a>>b>>c;
       int f,s;
       if(c%2!=0){
           f = a+(c/2+1);
           s = b + c/2;
       }
       else if(c%2==0){
           f = a + c/2;
           s = b + c/2;
       }
       if(f>s){
           cout<<"First"<<endl;
       }
       else{
           cout<<"Second"<<endl;
       }
   }
}