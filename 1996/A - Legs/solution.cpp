#include <iostream>
using namespace std;
 
int main() 
{
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int s = n/4+(n%4)/2;
    cout<<s<<endl;
   }
    return 0;
}