#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int pow(int base,int power){
    int mul = 1;
    for(int i=1;i<=power;i++){
        mul = mul * base;
    }
    return mul;
}
int main(){
    int t;
    cin >> t;
    repeat:
        int s;
        cin >> s ; //n==sum
        int n=2;
        while ((s%(pow(2,n)-1) != 0)) n++;
        cout << s/(pow(2,n)-1)<<endl;

        t--;
        if(t>0) goto repeat;


return 0;}
