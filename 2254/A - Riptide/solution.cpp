#include <iostream>
using namespace std;
int func(int a ,int b , int c)
{
    int l = max(max(a,b),c);
    int m = min(min(a,b),c);
    int mid = (a+b+c)-(l+m);
    
        return min((l-mid),(mid-m));
}
int main() 
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
    int x , y , z;
    cin>>x>>y>>z;
    cout<<func(x,y,z)<<endl;
   }
    return 0;
}