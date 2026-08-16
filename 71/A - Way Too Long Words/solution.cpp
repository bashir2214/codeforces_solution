#include <iostream>
#include <string>
using namespace std;
 
int main() {
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
      char start,end;
      int size;
      string s;
      cin>>s;
      size=s.length();
      start = s[0];
      end = s[size-1];
      if(size>10){
          cout<<start<<size-2<<end<<endl;
      }
      else{
          cout<<s<<endl;
      }
  }
 
   
}