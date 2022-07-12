#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

char* mergeAr(char*ar,int n){
    for(int i=0;i<n-1;i++){
            int j=i+1;
        while(ar[i] == ar[j]){
            ar[j] = '0';
            j++;
        }
    }
return ar;
}

string validation(char*ar,int n){
    char temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ar[i] > ar[j]){
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    //cout<< ar;
        for(int i=0;i<n-1;i++){
            if(ar[i] != '0' && ar[i] == ar[i+1]){
              return "NO\n";
            }
        }

    return "YES\n";
}

int main(){
    int n;
    cin >> n;
    break_point:
        int d;
        cin >>d;
        char chr[d];
        for(int i=0;i<d;i++){
            cin >> chr[i];
        }
        mergeAr(chr,d);
        cout << validation(chr,d);
        if(n>1){
            n--;
            goto break_point;
        }


return 0;
}
