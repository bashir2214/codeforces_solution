#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        int x = min(a,min(b,c));
        int y = max(a,max(b,c));
        if(a!=x&&a!=y){
            cout<<a<<endl;
        }
        else if(b!=x&&b!=y){
            cout<<b<<endl;
        }
        else if(a!=c&&c!=y){
            cout<<c<<endl;
        }
    }
    
    return 0;
}