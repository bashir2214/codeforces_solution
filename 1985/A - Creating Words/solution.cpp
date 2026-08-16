#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin>>n;
   
    for(int i=1;i<=n;i++){
        string input1;
        string input2;
        cin>>input1;
        cin>>input2;
        swap(input1[0],input2[0]);
        cout<<input1<<" "<<input2<<endl;
    }
    return 0;
}