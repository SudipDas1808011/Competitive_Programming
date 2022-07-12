#include<iostream>
#include<stdlib.h>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int neg_one=0;
    int hired=0,n,temp;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> temp;
        if(temp == -1 && hired ==0){
            neg_one++;
        }else if(temp == -1 && hired !=0){
            hired--;
        }
        else{
            hired += temp;
        }
    }
    cout << neg_one;

    return 0;
}
