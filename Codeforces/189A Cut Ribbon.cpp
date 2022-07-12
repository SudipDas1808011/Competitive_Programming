#include<iostream>
using std::cin;
using std::cout;

int minGet(int a, int b, int c){
if(c <= b && c <= a) return c;
else if(b <= a && b <= c) return b;
else return c;
 }

int main(){
    int n,a,b,c,count=1;
    cin >> n >> a >> b >> c;
    if(a+b == n || b+c == n || a+c == n) cout << 2;
    else cout << 1;



return 0;
}
