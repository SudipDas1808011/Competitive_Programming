/*
https://practice.geeksforgeeks.org/problems/first-element-to-occur-k-times5150/1
*/
class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {   
        if(n<k) return -1;
        if(k==1) return a[0];
       int *count = new int[sizeof(int)*(n - 2)];
        int i;
        
        for(i = 0; i < n; i++)
      {
        if(count[a[i]] == k-1)
          return a[i] ;
      
        else
          count[a[i]]++;
        }
        return -1;
    }
};