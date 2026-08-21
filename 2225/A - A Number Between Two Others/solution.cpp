#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
for(int i=0;i<t;i++){
    long long a,b;
    cin>>a>>b;
    long long c = b-a;
    if(c!=a && c%a==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
 
    return 0;
}