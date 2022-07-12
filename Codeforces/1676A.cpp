#include<iostream>
#include<string>
using namespace std;

int main(){
int tc;
cin>>tc;
string s;
while(tc--){
    cin>>s;
    int sum = 0;
    int sum_rev=0;
    for(int i=0;i<3;i++){
        sum+=s[i]-48;
        sum_rev+=s[3*2-1-i]-48;
    }
    if(sum == sum_rev) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}




return 0;
}
