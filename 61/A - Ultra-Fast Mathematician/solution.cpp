#include <iostream>
#include <string>
using namespace std;
int main() {
   string s1;
   string s2;
  
   char a = '0', b = '1';
   cin>>s1>>s2;
   int size;
   size = s1.length();
    string s3[size];
   for(int i=0;i<size;i++){
       if(s1[i]==s2[i]){
           s3[i] = a;
       }
       else if(s1[i]!=s2[i]){
           s3[i] = b;
       }
   }
   for(int i=0;i<size;i++){
       cout<<s3[i];
   }
}