#include <iostream>
#include <cmath>
using namespace std;
 
int main() 
{
    int t;
    cin>>t;
    while(t--){
        long long  n,k;
        cin>>n>>k;
        long long out = (k-1)*2+pow(2,n-(k-1));
        cout<<out<<endl;
    }
    return 0;
}