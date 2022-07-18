#include<iostream>
#include<bits/stdc++.h>
/*
 * code is made by sudip_das_mrinal;
 * beautiful year
 */
using namespace std;
int main(){
    int year;
    cin>>year;
    year++;
    int bckupyear=year;
    vector<int> digtCnt;
    for (int i = 0; i < 10; ++i) {
        digtCnt.push_back(-1);
    }
    vector<int>digits;
    for (int i = 0; i < 4; ++i) {
        digits.push_back(year%10);
        year/=10;
    }
    std::reverse(digits.begin(), digits.end());

    for (int i = 0; i < 4; ++i) {
        while(1){
            if(digtCnt[digits[i]]==-1){
                digtCnt[digits[i]]=digits[i];
                break;
            }else{
                if(digits[i]>9) {
                    digits[i]=0;
                    digits[i-1]++;
                    i=0;
                    digtCnt.clear();
                    for (int j = 0; j < 10; ++j) {
                        digtCnt.push_back(-1);
                    }
                }
                else {
                    digits[i]++;
                    switch (i) {
                        case 1:
                            digits[i+1]=0;
                            digits[i+2]=0;
                            break;
                        case 2:
                            digits[i+1]=0;
                            break;
                        default:
                            break;
                    }
                }
            }
        }
    }
    int result=0,t=1000;
    for (int i = 0; i < 4; ++i) {
        result+=digits[i]*t;
        t/=10;
    }
    cout<<result;

return 0;
}