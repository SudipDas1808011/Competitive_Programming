/*
https://practice.geeksforgeeks.org/problems/minimize-the-sum-of-product1525/1
*/

class Solution{
    public:
    long long int minValue(int a[], int b[], int n)
    {
        int long long sm=0;
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        for(int i=0;i<n;i++){
            sm+=a[i]*b[i];
        }
        return sm;
    }
};