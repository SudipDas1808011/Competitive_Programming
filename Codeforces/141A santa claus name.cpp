#include<iostream>
#include<typeinfo>
using std::cin;
using std::cout;
using std::endl;
using std::string;

string sortString(string s,int n){
        char temp;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(s[i] > s[j]){
                    temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
        }
return s;

}


string operation(string s1,string s2){
        if(s1.length() == s2.length()){
            s1=sortString(s1,s1.length());
            s2=sortString(s2,s1.length());
            for(int i=0;i<s1.length();i++){
                if(s1[i] != s2[i]){
                    return "NO";
                }
            }return "YES";
        }else return "NO";

}

int main(){

    string s1="jj",s2,s3;


   cin >> s1 >> s2 >> s3;
    s1 = s1+s2;

    cout << operation(s1,s3);




    return 0;
}
