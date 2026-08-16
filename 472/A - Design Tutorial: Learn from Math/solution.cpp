#include <iostream>
 
using namespace std;
int main() {
int n,x,y;
cin>>n;
if(n%2==0){
    x=4;
    y=n-x;
}
else if(n%3==0){
    x=6;
    y=n-x;
}
else{
    x = 4;
   y = n-x;
    while(true){
        if(x%2==0&&y%3==0){
            break;
        }
        x=x+2;
        y=y-2;
    }
}
cout<<x<<" "<<y;
}