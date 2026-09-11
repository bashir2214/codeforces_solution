#include <iostream>
using namespace std;
 
int main() 
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int count = 0;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        if(value%2!=0){
            count++;
        }
    }
    if(count%2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
    return 0;
}