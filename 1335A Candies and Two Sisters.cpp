#include<iostream>
using std::cin;
using std::cout;
using std::endl;


int main(){
    int t;
    cin >> t;
    repeat:
        int n,b,a,result;
        cin >> n;
        if(n%2 == 0){
            result = n/2-1;
        }else{
            result = n/2;

        }

        cout << result <<endl;
        t--;
        if(t>0) goto repeat;



return 0;}
