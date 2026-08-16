#include <iostream>
#include <string>
using namespace std;
int main() {
   string s;
   string t;
   cin>>s;
   cin>>t;
   int size;
   size = s.length();
   int i=0,j=size-1;
   while(i<=j){
       swap(s[i],s[j]);
       i++;
       j--;
   }
  if(s==t){
      cout<<"YES";
  }
  else{
      cout<<"NO";
  }
}