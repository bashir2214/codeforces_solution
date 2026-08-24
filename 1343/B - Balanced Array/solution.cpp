#include <iostream>
using namespace std;
 
int main() 
{
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    if( n%2!=0 || (n/2)%2!=0 ){
        cout<<"NO"<<endl;
    }
    else if((n/2)%2==0){
        cout<<"YES"<<endl;
        int arr[n] = {};
        int p = 0;
        for(int i=1;i<=n;i++){
            
            if(i<=n/2){
                arr[i] = i*2;
            }
            else if(i<n){
                arr[i] = 1 + 2*p;
                p = p+1;
            }
            else if(i==n){
                arr[i] = arr[n/2]+(arr[n/2]-2)/2;
            }
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
  }
    return 0;
}