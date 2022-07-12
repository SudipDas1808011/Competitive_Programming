#include <iostream>
using namespace  std;
void mainApproach(string s){
    cin>>s;
    int slen = s.length(); // lenght of string
    string readStr="";  //reading memory
    int ltrPrsnt,cnt=0,Ccnt=0;
    for (int i = 0; i < slen; ++i) {
        ltrPrsnt = readStr.find(s.at(i)); //check if letter already read or not
        readStr+=s[i]; //adding letter to memory
        if(ltrPrsnt==-1) cnt++; //if not read before it return -1 and reading letter count increase
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
