#include <iostream>
using namespace std;
 
int main() 
{
    int a , b , c;
    cin>>a>>b>>c;
     int m = min(a,min(b,c));
     int l = max(a,max(b,c));
     int n = (a+b+c) - (m+l);
     cout<<(l-n)+(n-m);
    return 0;
}