#include <iostream>
using namespace std;
int main() {
int n;
int s=0;
cin>>n;
for(int i=1;i<=n;i++){
   bool r;
  int  r_count=0;
    for(int j=1;j<=3;j++){
     cin>>r;
     if(r==1){
         r_count++;
     }
    }
    if(r_count>=2){
        s=s+1;
    }
}
cout<<s;
}