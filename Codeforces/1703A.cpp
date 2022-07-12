#include <iostream>
#include <string>
using namespace std;


int main(){
    int tc;
    string s;
    cin>>tc;
    while(tc--){
        cin>>s;
        string res="";
        for (int i = 0; i < s.length(); ++i) {
            if(s[i]>=97){
                res+= s[i]-32;
            }else{
                res+=s[i];
            }

        }


        if(res.compare("YES")==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        res="";

    }
}