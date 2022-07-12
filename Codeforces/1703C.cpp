#include <iostream>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while (tc--){

        int n;
        cin>>n;
        string  moves[n];
        int d[n],a[n],res[n];
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin>>d[i];
            cin>>moves[i];
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < d[i]; ++j) {
                if(moves[i][j]=='U')a[i]--;
                else a[i]++;
            }
            if(a[i]>9) a[i]-=10;
            if(a[i]<0) a[i]+=10;
            cout<<a[i]<<" ";
        }cout<<endl;

    }

}