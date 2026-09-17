#include <iostream>
#include <climits>
using namespace std;
 
int main()
{
    int t;
    cin >>t;
 
   while(t--)
    {
   int n;
   cin>>n;
   int m = INT_MAX;
   int sum = 0;
   for(int i=0;i<n;i++){
    int value;
    cin>>value;
    sum = sum + value;
    if(value<m){
        m = value;
    }
   }
   cout<<sum-(m*n)<<endl; 
  }
    return 0;
}