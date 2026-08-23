#include <iostream>
#include <string>
using namespace std;
 
int main() 
{
   int size;
   cin>>size;
   string s;
   cin>>s;
   int count = 0;
   string s1 = "abcdefghijklmnopqrstuvwxyz";
   
   for(int i=0;i<26;i++){
    for(int j=0;j<size;j++){
     if(s1[i]==tolower(s[j])){
        count = count+1;
        break;
     }
    }
   }
   if(count >= 26){
    cout<<"YES";
   }
   else{
    cout<<"NO";
   }
    return 0;
}