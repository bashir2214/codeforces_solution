#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s;
    cin>>s;
    int size;
    size = s.length();
    int upper_count=0,lower_count=0;
    for(int i=0;i<size;i++){
        if(isupper(s[i])){
            upper_count++;
        }
        else if(islower(s[i])){
            lower_count++;
        }
    }
    if(upper_count>lower_count){
         for(int i=0;i<size;i++){
             s[i]=toupper(s[i]);
         }
    }
    else if(upper_count<=lower_count){
         for(int i=0;i<size;i++){
             s[i]=tolower(s[i]);
         }
    }
     cout<<s;   
    }