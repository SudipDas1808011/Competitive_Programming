/*
https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1
*/
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int> v;
        if(s==0){v.push_back(-1);return v;}
        long long rem=s;
        int i=0,fElm=1,p=0;
        while(rem != 0 && p<n){
             rem-=arr[i];
            if ((i==n && rem !=0)|| (rem<0)){
                p++;
                i=p;
                if(rem < 0){fElm=p+1;rem=s;continue;}
            }
            
            i++;
            
        }
        if(rem == 0){v.push_back(fElm);
        v.push_back(i);
        }
        else  v.push_back(-1);
    }
};