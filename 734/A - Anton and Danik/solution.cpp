#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    string s;
    char a = 'A';
    char d = 'D';
    cin>>n;
    cin>>s;
    int a_count = 0, d_count = 0;
    for(int i=0;i<n;i++){
        if(s[i]==a){
            a_count++;
        }
        else if(s[i]==d){
         d_count++;   
        }
    }
    if(a_count>d_count){
        cout<<"Anton";
    }
    else if(a_count<d_count){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
}