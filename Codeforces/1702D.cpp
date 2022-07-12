#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
int tc,p,k=0;
cin>>tc;
string s;
while(tc--){
   cin>>s;
   cin>>p;
    int sum = 0;
    int slen = s.length();
    string tmps = s;
    for (int i=0;i<slen;i++)
    {
        sum += s[i]-96;
    }
    if(p>sum)break;
    int tmpsLen = slen;
    sort(tmps.begin(),tmps.end());
    while(p<=sum){
        sum -= (tmps[tmpsLen-1]-96);
        char c = tmps.at(tmpsLen-1-k);
        cout<<c <<endl;

        int idx = s.find(tmps[tmpsLen-1]);
        tmps.erase(remove(tmps.begin(), tmps.end(), c), tmps.end());
        tmpsLen--;
        s.erase(remove(s.begin(), s.end(), c), s.end());

        cout<< "sum = "<<sum<<endl;

        cout<<s <<endl;

    }


}



return 0;
}
