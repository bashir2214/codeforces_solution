#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   float sum = 0;
   float output = 0;
   for(int i=0;i<n;i++){
    int input;
    cin>>input;
   sum = sum + input; 
   }
   output = sum/n;
   cout<<output;
}