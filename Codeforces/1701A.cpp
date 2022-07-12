#include<iostream>

using namespace std;

int main(){
int tc;
cin>>tc;
int a[2][2];
int sum=0;
while(tc--){

    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            cin>>a[i][j];
            sum+=a[i][j];
        }
    }
    switch(sum){
    case 0:
        cout<<0<<endl;
        sum=0;
        continue;
    case 4:
        cout<<2<<endl;
        sum=0;
        continue;
    default:
        cout<<1<<endl;
        sum=0;
        continue;
    }



}

return 0;
}
