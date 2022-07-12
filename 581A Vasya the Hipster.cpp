#include<iostream>
#include<stdlib.h>
using std::cout;
using std::cin;
using std::endl;

int main(){
int b,r;
cin >> r >> b;

if(b>r){
  cout << b - abs(b-r) << " ";
  b -= r;
  cout << b/2;
}
else if(r>=b){
    cout << r - abs(b-r) << " ";
   r -= b;
   cout << r/2;
}




return 0;
}
