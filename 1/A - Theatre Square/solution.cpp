#include <iostream>
using namespace std;
int main() {
    int m,n,a;
    cin>>m>>n>>a;
   long long s,ms,ns;
    if(m%a==0){
        ms = m/a;
    }
    else if(m%a!=0){
        ms = m/a + 1;
    }
    if(n%a==0){
        ns = n/a;
    }
    else if(n%a!=0){
        ns = n/a + 1;
    }
    s = ms * ns;
    cout<<s;
}