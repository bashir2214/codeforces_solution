#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
  int c = 0;
  for(int i=0;i<n;i++){
    bool o;
    cin>>o;
    if(o==0){
        c++;
    }
  }
  if(c<n){
      cout<<"HARD";
  }
  else{
      cout<<"EASY";
  }
}