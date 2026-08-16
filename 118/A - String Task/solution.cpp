#include <iostream>
#include <string>
using namespace std;
int main(){
   string s;
   cin>>s;
   int size1;
   char c = '.';
   size1 = s.length();
   for(int i=0;i<size1;i++){
       if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='y'||s[i]=='Y'){
           s.erase(i,1);
           i--;
           size1--;
       }
   }
   for(int i=0;i<size1;i++){
      s[i] = tolower(s[i]);
   }
   for(int i=0;i<size1;i++){
    cout<<c<<s[i];   
   }
}