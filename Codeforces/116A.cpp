#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int nn,ext,ent,cap=0;
    cin >> nn;
    int arr[nn];
    for (int i=0;i<nn;i++){
        cin >> ext >> ent;
        cap -= ext;
        cap += ent;
        arr[i] = cap;
    }
     int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n, greater<int>());
        cout << arr[0];

return 0;}
