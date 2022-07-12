#include<iostream>
#include<string>
using namespace std;

int main(){
string s;
cin>>s;
for(int i=0;i<s.length();i++){
    switch(s[i]){
    case 'H':
        cout<<"YES"<<endl;
        return 0;
    case 'Q':
        cout<<"YES";
        return 0;
    case '9':
        cout<<"YES";
        return 0;
    default:
        break;
    }

}
cout<<"NO";
return 0;
}
