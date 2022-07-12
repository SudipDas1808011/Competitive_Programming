#include <iostream>
using namespace std;

int main(){

    int tc,n,cnt=0;
    cin>>tc;
    while(tc--){
        cin>>n;
        string s,tmpS="";
        int chrprsnt;
        cin>>s;
        for (int i = 0; i < n; ++i) {
            chrprsnt=tmpS.find(s[i]);
            tmpS+=s[i];
            if(chrprsnt == -1){
                cnt+=2;
            }else cnt++;
        }
        cout<<cnt<<endl;
        cnt=0;
    }
}