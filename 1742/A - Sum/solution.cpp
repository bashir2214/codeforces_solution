#include <iostream>
using namespace std;
 
int main() 
{
    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        int m = min(a,min(b,c));
        int l = max(a,max(b,c));
        int n = (a+b+c) - (m+l);
        if(l == (m+n)){
            cout<< "YES" <<endl;
        }
        else{
            cout<< "NO" <<endl;
        }
    }
    return 0;
}