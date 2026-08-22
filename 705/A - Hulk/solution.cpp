#include <iostream>
using namespace std;
 
int main() 
{
    int t;
    cin>>t;
        cout<<"I hate ";
    for(int i=2;i<=t;i++){
     if(i%2!=0){
        cout<<" that I hate ";
     }  
     else if(i%2==0){
        cout<<"that I love ";
     }
    }
    cout<<"it ";
    return 0;
}