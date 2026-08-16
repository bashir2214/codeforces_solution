#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
   string s;
   cin>>n;
   cin>>s;
   int count=0;
   for(int i=0;i<n;i++){
       for(int j=i+1;j<=i+1;j++){
          if(s[i]==s[j]){
              count++;
              break;
          } 
       }
   }
   cout<<count;
   }