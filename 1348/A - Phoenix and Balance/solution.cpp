#include <iostream>
#include <cmath>
using namespace std;
 
int main() 
{
int t;
cin>>t;
while(t--)
{
   int n;
   cin>>n;
   int p = n/2;
  
   cout<<pow(2,p+1)-2<<endl;
}
    return 0;
}