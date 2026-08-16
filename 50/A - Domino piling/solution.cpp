#include <iostream>
using namespace std;
int main() {
 int m,n;
 cin>>m>>n;
 int domino = 2;
 int count;
 int area = m * n;
 count = area/domino;
 cout<<count;
}