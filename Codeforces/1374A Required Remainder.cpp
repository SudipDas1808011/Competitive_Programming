#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
        int lines;
        cin >> lines;
     repeat:
        int x,y,n,rem=0;

        cin >> x >> y >> n ;

        rem = n%x;
        if(rem == y){cout << n <<endl;}
        else if(rem < y){cout << n+y-rem-x <<endl;}
        else {cout << n - (rem - y) <<endl; }
        lines --;
        if(lines > 0) goto repeat;


return 0;}
