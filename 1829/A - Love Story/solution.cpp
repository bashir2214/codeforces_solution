#include <iostream>
#include <string>
using namespace std;
int main() {
  string s = "codeforces";
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
       string s1;
      cin>>s1;
       int count = 0;
  for(int j=0;j<10;j++){
     
      if(s1[j]!=s[j]){
          count = count + 1;
      }
      
  }
  cout<<count<<endl;
}
}