#include <iostream>
using namespace std;
 
int main() 
{
    int t;
    cin>>t;
    while(t--){
       int  a , b,c;
        cin>>a>>b>>c;
       int  m = min(a,b);
        int  n = max(a,b);
        int count = 0;
        while(n>m){
            n = n-c;
            m = m+c;
            count++;
        }
        cout<<count<<endl;
 
 
    }
    return 0;
}