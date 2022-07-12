#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int logic(int* candies,int n);
int main(){
    int tc,n; //tc = test case; n=boxes;
    cin >> tc;
    for (int k=1;k<=tc;k++){
        cin >>n;
        int candies[n];
        for(int i=0;i<n;i++){
           cin >> candies[i];           //number of candies in ith box
        }
        cout << logic(candies,n) <<endl; // without endl result gives wrong output
    }
    return 0;
}
int logic(int *candies,int n){
        int result=0;
        if(n>1){
        sort(candies,candies+n); // sorting ascending order
        for(int j=1;j<n;j++){
                if(candies[j] > candies[0]){  //candies[0] is the lowest number
                    result += (candies[j] - candies[0]);
                }
            }
        }else
            return 0;
        return result;
    }
