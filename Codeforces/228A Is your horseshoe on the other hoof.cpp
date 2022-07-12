#include<iostream>
using std::cin;
using std::cout;
using std::endl;

static int count=0;

int* sort(int *ar){
    int temp;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(ar[i] > ar[j]){
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    return ar;
}

int* merge(int *ar){
    for(int i=0;i<3;i++){
        if(ar[i] == ar[i+1])
         count ++;
    }

    return ar;
}

int main(){
    int ar[4];
    for(int i=0;i<4;i++){
        cin >> ar[i];
    }
    sort(ar);
    merge(ar);
    cout << count;

    return 0;
}
