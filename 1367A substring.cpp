#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    int t;
    cin >> t;
    repeat:
        string s,s2="";
        cin >> s;
        int resLen = 2+(s.length()-2)/2;
        char ar[resLen];
        ar[0]=s[0];
        int j=1;
        for(int i=1;i<s.length()-2;i+=2){
            ar[j] = s[i];
            j++;
        }
        ar[resLen-1]=s[s.length()-1];
        for(int i=0;i<resLen;i++){
            s2 = s2 + ar[i];
        }
        cout << s2 <<endl;
        t--;
        if(t>0) goto repeat;




return 0;}
