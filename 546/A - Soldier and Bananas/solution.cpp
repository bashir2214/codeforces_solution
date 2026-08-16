#include <iostream>
using namespace std;
int main(){
    int c,pa,n;
    int b=0,t=0;
cin>>c>>pa>>n;
for(int i=1;i<=n;i++){
    t=t+(c*i);
}
if(pa<t){
   b=t-pa;
}
 cout<<b;
}