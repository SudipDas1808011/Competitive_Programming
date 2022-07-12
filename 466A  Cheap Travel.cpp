#include<iostream>
using std::cin;
using std::cout;

int minimum(int *ar,int count){
    int temp;
    for(int i=0;i<count;i++){
        for(int j=i+1;j<count;j++){
            if(ar[i] > ar[j]){
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    return ar[0];
}

int main(){
    int n,m,a,b,count=0,temp,i=0,t=0;
    cin >> n >>m >> a >> b;
    temp = n;

    while(temp != 0){
        count++;
        temp = n - m*i;
        i++;
        if(temp <= 0) temp=0;

    }
    int arSum[count];
    temp = n;i=0,t=0;

    while(temp != 0){
        arSum[i] = i*b+ temp*a;
        i++;
        temp = n - m*i;
        if(temp <= 0){
            arSum[i] = i*b;
            temp=0;
        }

    }
    cout << minimum(arSum,count);

}

/*wrong in test 3
Test: #3, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 1, verdict: WRONG_ANSWER
Input
10 3 5 1
Output
8
Answer
4
Checker Log
wrong answer expected '4', found '8'
======================================================
#include<iostream>
using std::cin;
using std::cout;

int minimum(int *ar,int count){
    int temp;
    for(int i=0;i<count;i++){
        for(int j=i+1;j<count;j++){
            if(ar[i] > ar[j]){
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    return ar[0];
}

int main(){
    int n,m,a,b,count=0,temp,i=0;
    cin >> n >>m >> a >> b;
    temp = n;

    while(temp > 0){
        count++;
        temp -= m*i;
        i++;
    }
    int arSum[count];
    temp = n;i=0;

    while(temp > 0){
        arSum[i] = i*b+ temp*a;
        i++;
        temp = n - m*i;

    }
    cout << minimum(arSum,count);

}
/*

/* wrong in test 4
Test: #4, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 1, verdict: WRONG_ANSWER
Input
1000 1 1000 1000
Output
4016
Answer
1000000
Checker Log
wrong answer expected '1000000', found '4016'
=============================================

#include<iostream>
using std::cin;
using std::cout;

int minimum(int *ar,int count){
    int temp;
    for(int i=0;i<count;i++){
        for(int j=i+1;j<count;j++){
            if(ar[i] > ar[j]){
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    return ar[0];
}

int main(){
    int n,m,a,b,count=0,temp,i=0,t=0;
    cin >> n >>m >> a >> b;
    temp = n;

    while(temp != 0){
        count++;
        temp = n - m*i;
        i++;
        if(temp < 0) temp=0;

    }
    int arSum[count];
    temp = n;i=0,t=0;

    while(temp != 0){
        arSum[i] = i*b+ temp*a;
        i++;
        temp = n - m*i;
        if(temp < 0){
            arSum[i] = i*b;
            temp=0;
        }

    }
    cout << minimum(arSum,count);

}
*/
