#include <iostream>
#include <string>
using namespace std;
int main() {
  string s1;
  string s2;
  int size;
  cin>>s1>>s2;
  size = s1.length();
   for(int i=0;i<size;i++){
       s1[i] = tolower(s1[i]);
       s2[i] = tolower(s2[i]);
   }
  if(s1!=s2){
  for(int i=0;i<size;i++){
      if(s1[i]<s2[i]){
          cout<<"-1";
          break;
      }
      else if(s1[i]>s2[i]){
          cout<<"1";
          break;
      }
      
  }
  }else{
      cout<<"0";
  }
    
}