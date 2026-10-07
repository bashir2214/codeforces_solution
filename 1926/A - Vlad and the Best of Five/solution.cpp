#include <iostream>
using namespace std;
 
int main() 
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a{} , b{};
        for(int i{};i<5;++i){
            if(s[i]=='A'){
                ++a;
            }
            else{
                ++b;
            }
        }
        if(a>=3){
            cout<<"A"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }
    }
    return 0;
}