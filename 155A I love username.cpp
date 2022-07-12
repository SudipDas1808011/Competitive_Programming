#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main(){
    int n,num,min,max,count=0;
    cin >>n;
    for (int i=0;i<n;i++){
            cin >> num;
        if(i==0){
            min = num;
            max = num;
        }
        else if(num < min ){
            count += 1;
            min = num;
        }
        else if(num > max ){
            count += 1;
            max = num;
        }

    }
    cout << count;
return 0;}
