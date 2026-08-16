#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int w,h,n;
        cin>>w>>h>>n;
        int count = 1;
        while(w%2==0||h%2==0){
            if(w%2==0){
                w = w/2;
            }
            else if(h%2==0){
                h = h/2;
            }
            count = count*2;
        }
        if(count<n){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
 
    return 0;
}