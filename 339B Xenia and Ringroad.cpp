#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int cmp(long long int x, long long int y){
    if(x>y){
        return -1;
    }else if(x<y){
        return 1;
    }else{
        return 0;
    }
}
long long int mainTask(long long int *ar, long long int m, long long int n){
    int container;
    long long int count=0;
    count += ar[0] - 1;
    for(long long int i=0;i<m-1;i++){
        container = cmp(ar[i],ar[i+1]);
        if(container == 0) continue;
        else if(container > 0){
                count += ar[i+1] - ar[i];
        }else{
            count += n-ar[i]+ar[i+1];//distance from 4 + distance from 4 to 1 + distance 1 to destination 3->2 ==== 3->4->1->2
        }
    }
    return count;
}

int main(){
long long int n,m;
cin >>n>>m;
long long int ar[m];
for(long long int i=0;i<m;i++) cin >> ar[i];
cout << mainTask(ar,m,n);


return 0;
}
