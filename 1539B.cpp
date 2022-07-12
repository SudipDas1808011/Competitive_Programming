#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include <unordered_map>

using namespace std;
vector <int> rpt;
string uniques(string s,int slen){

    int k=0,c=0;
    for(int i=0;i<slen-1;i++){
        for(int j=i+1;j<slen;j++){
            if(s[i] == s[j]){
                s[j] = '\0';
                c++;
            }
        }
    }
    string ss="";
    for(int i=0;i<slen;i++){
        if(s[i] != '\0'){
            ss.push_back(s[i]);
        }
    }
    for(int i=0;i<ss.size();i++) rpt.push_back(i+1);

    return ss;

}

int main(){

    int n,q,c=0,l,r,slen;
    cin >> n >> q;
    string p,s_org,s;
    cin >> s_org;
    unordered_map<char, int> umap;

    slen=s_org.size();
    p = uniques(s_org,slen);
    for(int i=0;i<p.size();i++){
            umap[p[i]] = rpt[i];
        }

    for(q;q>=1;q--){
        cin >> l >> r;
        s=s_org.substr(l-1,r-l+1);
        for(int i=0;i<s.size();i++){
        for(int k=0;k<umap.at(s[i]);k++){
            cout << s[i];
            c++;
            }
        }cout << c <<endl;
        c=0;
    }

return 0;
}




/*
for(q;q>=1;q--){
        cin >> l >> r;
        s=s_org.substr(l-1,r-l+1);
            for(int i=0;i<s.size();i++){
                for(int k=1;k<=umap.at(s[i]);k++){   //baca
                    cout << s[i];
                }
        }cout << endl;
        umap.clear();
    }

*/
