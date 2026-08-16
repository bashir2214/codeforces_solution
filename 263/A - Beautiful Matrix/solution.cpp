#include <iostream>
using namespace std;
int main() {
  int count;
 int input[6][6];
  for(int i=1;i<=5;i++){
      for(int j=1;j<=5;j++){
          cin>>input[i][j];
      }
  }
  int row_count=0,colum_count=0;
  for(int i=1;i<=5;i++){
      
      for(int j=1;j<=5;j++){
          if(input[i][j]==1){
              if(i>3){
                  row_count=i-3;
              }
              if(i<3){
                  row_count = 3-i;
              }
              if(j>3){
                  colum_count=j-3;
              }
              if(j<3){
                  colum_count=3-j;
              }
              break;
          }
      }
          }
          count = row_count+colum_count;
          cout<<count;
   
}