/*
https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1
*/
string isSubset(int a1[], int a2[], int n, int m) {
    map<int,bool>mp;
    for(int i=0;i<n;i++) mp.insert({a1[i],true});
    for(int i=0;i<m;i++){
        if (mp.find(a2[i]) == mp.end()) {
          return "No";
        } else {
          continue;
        }
    }
        return "Yes";
}