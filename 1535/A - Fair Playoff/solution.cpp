#include <iostream>
#include<climits>
using namespace std;
 
int main() 
{
    int t;
    cin>>t;
    while(t--){
        int m1 = INT_MIN;
        int m2 = INT_MIN;
        int m3 , m4;
        int arr[4];
     for(int i=0;i<4;i++){
        cin>>arr[i];
        if(arr[i]>m1){
            m1 = arr[i];
        }
     }
     for(int j=0;j<4;j++){
        if(arr[j]>m2&&arr[j]!=m1){
            m2 = arr[j];
        }
     }
     m3 = max(arr[0],arr[1]);
     m4 = max(arr[2],arr[3]);
     
     if(m1+m2 == m3+m4){
        cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }
    }
    return 0;
}