#include<iostream>
using std::cin;
using std::cout;

int maxFind(int*ar,int n){
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

return ar[0];
}
int cashNeed(int *ar,int n,int max){

        int cashNeed = 0;
        for(int i=0;i<n;i++){
            if(ar[i] != max){
                cashNeed += max - ar[i];
            }
        }

    return cashNeed;
}

int main(){
    int n,max;
    cin >> n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin >> ar[i];
    }
    max = maxFind(ar,n);
    cout << cashNeed(ar,n,max);

return 0;}
