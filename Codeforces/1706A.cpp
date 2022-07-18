//
// Created by sudip_das_mrinal on 7/18/2022.
//
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n,m;
        cin>>n>>m;
        int seq[n];
        string s;
        map<int,bool> mp;
        map<int,bool>::iterator  it;
        for (int i = 0; i < n; ++i) {
            cin>>seq[i];
            mp.insert({seq[i],false});
        }
        for (int i = 0; i < m; ++i) {
            s.push_back('B');
        }
        for (int i = 0; i < n; ++i) {
            int mp1=m-seq[i];
            int ai = seq[i]-1;
            if(mp1<=ai){
                if(s[mp1]=='A'){
                    s[ai]='A';
                    continue;
                }
                s[mp1]='A';
            }else{
                if(s[ai]=='A')
                {
                    s[mp1]='A';
                    continue;
                }
                s[ai]='A';
            }
        }
        cout<<s<<endl;



    }
return 0;
}
