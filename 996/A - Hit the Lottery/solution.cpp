#include <iostream>
using namespace std;
 
int main() 
{
int n;
cin>>n;
int bills = 0;
if(n>=100){
    bills = bills + n/100;
    n = n%100;
    bills = bills + n/20;
    n = n%20;
    bills = bills + n/10;
    n = n%10;
    bills = bills + n/5;
    n = n %5;
    bills = bills + n%5; 
}
else if(n>=20){
    bills = bills + n/20;
    n = n%20;
    bills = bills + n/10;
    n = n%10;
    bills = bills + n/5;
    n = n %5;
    bills = bills + n%5; 
}
else if(n>=10){
    bills = bills + n/10;
    n = n%10;
    bills = bills + n/5;
    n = n %5;
    bills = bills + n%5; 
}
else if(n>=5){
   bills = bills + n/5;
    n = n %5;
    bills = bills + n%5; 
}
else {
   bills = bills + n%5; 
}
cout<<bills;
    return 0;
}