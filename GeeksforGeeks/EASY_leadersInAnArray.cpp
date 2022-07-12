/*
https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1
*/
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> v;
        int tmp=a[n-1];
        
        v.push_back(tmp);
        for(int i=n-1;i>0;i--){
            if(a[i-1]>=tmp){
                v.push_back(a[i-1]);
                tmp=a[i-1];
            }
        }
        reverse(v.begin(),v.end());
        return v;
        
    }
};