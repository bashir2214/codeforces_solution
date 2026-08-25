#include <iostream>
using namespace std;
 
int main() 
{
int n;
cin>>n;
    int x;
    cin>>x;
    int p[x];
    for(int i=0;i<x;i++){
      cin>>p[i];
    }
    int y;
    cin>>y;
    int q[y];
    for(int j=0;j<y;j++){
        cin>>q[j];
    }
    int s[x+y];
    for(int k = 0 ; k < x+y; k++){
    if(k<x){
        s[k] = p[k];
    }
    else{
        s[k] = q[k-x];
    }
    }
    int count = 0;
    for(int l=1;l<=n;l++){
        for(int m=0;m < x+y ; m++){
            if(l == s[m]){
                count++;
                break;
            }
        }
    }
    if(count==n){
        cout<<"I become the guy.";
    }
else{
    cout<<"Oh, my keyboard!";
}
    return 0;
}