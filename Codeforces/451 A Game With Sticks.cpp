#include<iostream>
using std::cin;
using std::cout;

int main(){
    int n,m;
    cin >> n >> m;
    if(n <= m){
        if(n%2 == 0){
            cout << "Malvika";
        }else{
            cout << "Akshat";
            }
    }else{
        if(m%2 == 0){
            cout << "Malvika";
        }else{
            cout << "Akshat";
            }
    }

    return 0;
}
