#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int max(int*ar){
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(ar[i] < ar[j]){
                ar[i] += ar[j];
                ar[j] = ar[i] - ar[j];
                ar[i] = ar[i] - ar[j];
            }
        }
    }
    return ar[0];
}

int main(){
    int inpt[4],maxz;
    for(int i=0;i<4;i++) cin >> inpt[i];
    maxz = max(inpt);
    for(int i=0;i<4;i++){
        if(maxz != inpt[i] ){
            cout << maxz - inpt[i] <<" ";
        }
    }

return 0;}

