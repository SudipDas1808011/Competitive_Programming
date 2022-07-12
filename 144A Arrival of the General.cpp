#include <iostream>
using std::cin;
using std::cout;

int* sort(int*ar,int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ar[i] < ar[j]){
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    return ar;
}
int indexMax(int*arCp,int n,int max){
    for(int i=0;i<n;i++){
        if(max == arCp[i]){
            return i;
        }
    }
}
int indexMin(int *arCp,int n,int min){

    for(int i=n-1;i>=0;i--){
        if(min == arCp[i])
            return i;
    }
}

int main(){
    int n,max,min,maxIndex,minIndex,result=0;
    cin >> n;
    int ar[n],arCp[n];
    for (int i=0;i<n;i++){
        cin >> ar[i];
        arCp[i] = ar[i];
    }
    sort(ar,n);

    max = ar[0];
    min = ar[n-1];

    maxIndex = indexMax(arCp,n,max);
    minIndex = indexMin(arCp,n,min);

    result += n-1 - minIndex;
    result += maxIndex;

    if(maxIndex > minIndex){
        result--;
    }

    cout << result;
    return 0;
}
