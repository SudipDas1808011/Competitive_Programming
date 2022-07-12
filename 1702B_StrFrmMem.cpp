#include <iostream>
using namespace  std;
void mainApproach(string s){
    cin>>s;
    int slen = s.length();
    string readStr="";
    int ltrPrsnt,cnt=0,Ccnt=0;
    for (int i = 0; i < slen; ++i) {
        ltrPrsnt = readStr.find(s.at(i));
        readStr+=s[i];
        if(ltrPrsnt==-1) cnt++;
        if(cnt>3){
            Ccnt++;cnt=1;
            char tmpchr = readStr.at(readStr.length()-1);
            readStr="";
            readStr+=tmpchr;
        }
    }
    Ccnt++;
    cout<<Ccnt<<endl;
}
int main(){
    int tc;
    cin>>tc;
    string s ;
    while(tc--){
        mainApproach(s);
    }
    return 0;
}