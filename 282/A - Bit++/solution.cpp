#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int x = 0;
   char a = 'X';
   char b = '+';
   char c = '-';
    for(int i=1;i<=n;i++){
        char input;
      int  count_b=0;
       int count_c=0;
       for(int j = 1;j<=3;j++){
           cin>>input;
           if(input==b){
               count_b++;
           }
            if(input==c){
               count_c++;
           }
       }
       if(count_b==2){
           x=x+1;
       }
        if(count_c==2){
          x=x-1;
       }
}
cout<<x;
}