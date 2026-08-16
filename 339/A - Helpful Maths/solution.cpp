#include <iostream>
#include <string>
using namespace std;
int main() {
   string s;
  cin>>s;
  char c = '+';
  
  int size;
  size = s.length();
  for(int i=0;i<size;i++){
      if(s[i]!=c){
      for(int j=i+1;j<size;j++){
          if(s[j]!=c){
              if(s[i]>s[j]){
                  swap(s[i],s[j]);
                 
              }
              
          }
          
      }
  }
}
cout<<s;
}