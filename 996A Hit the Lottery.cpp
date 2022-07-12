#include<iostream>
using std::cin;
using std::cout;

int main(){
    int amount,count=0;
    cin >> amount;
    while(amount >=100){
        count += amount/100;
        amount = amount % 100;
    }
    while(amount >= 20){
        count += amount/20;
        amount = amount % 20;
    }
    while(amount >= 10){
        count += amount/10;
        amount = amount %10;
    }
    while(amount >= 5){
        count += amount/5;
        amount = amount % 5;
    }
    count += amount;

    cout << count;


    return 0;
}
