#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   int arr[n];
    int c = 0;
   for(int i=0;i<n;i++){
       int a,b;
       cin>>a>>b;
       c = (c-a)+b;
       arr[i] = c;
   }
   int max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
   cout<<max;
}