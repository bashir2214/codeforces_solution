#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s;
    cin>>s;
    int size;
    size = s.length();
    
    for(int i=0;i<size;i++){
        if(i==0){
            s[i]=toupper(s[i]);
        }
        
    }
 
  cout<<s;  
}