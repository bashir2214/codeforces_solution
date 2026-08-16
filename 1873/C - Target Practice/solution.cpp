#include <iostream>
 
using namespace std;
int main() {
    int n;
    cin>>n;
    
   while(n>0){
       int count = 0;
    for(int i=1;i<=10;i++){
      
      for(int j=1;j<=10;j++){
          
        char input;
        cin>>input;
        if(input=='X'){
            if(i==1||j==1||i==10||j==10){
            count = count + 1;
        }
        else if(i==2||j==2||i==9||j==9){
         count = count + 2;   
        }
        else if(i==3||j==3||i==8||j==8){
         count = count + 3;   
        }
        else if(i==4||j==4||i==7||j==7){
         count = count + 4;   
        }
        else if(i==5||j==5||i==6||j==6){
         count = count + 5;   
        }
      }
    }
    }
    cout<<count<<endl;
    n = n-1;
   }
    return 0;
}