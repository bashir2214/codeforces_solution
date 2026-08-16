#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin>>s;
    int count;
    int size;
    size = s.length();
    int match = 0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(s[i]==s[j]){
              match = match +1; 
              break;
            }
        }
    }
    count = (size - match);
 if(count%2==0){
     cout<<"CHAT WITH HER!";
 }
 else if(count%2!=0){
     cout<<"IGNORE HIM!";
 }
}