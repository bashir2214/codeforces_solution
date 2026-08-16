// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s = "abc";
    for(int i=1;i<=n;i++){
        string input;
        cin>>input;
        if(input!=s){
            if(input[0]=='a'){
                swap(input[1],input[2]);
            }
            else if(input[1]=='a'){
                swap(input[0],input[1]);
            }
            else if(input[2]=='a'){
                swap(input[0],input[2]);
            }
        }
 
        if(input==s){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
            }
    }
    return 0;
}