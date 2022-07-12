/*
https://practice.geeksforgeeks.org/problems/reverse-array-in-groups0255/1
*/
class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
         long long int tmp;
        if(k>n)k=n;
        int p=n/k,c=1,index=0,i=0,fi=k;
        while(p!=0){
            
            for( i=0;i<k/2;i++){
            tmp = arr[index];
            arr[index] = arr[fi-1-i];
            arr[fi-1-i] = tmp;
            index++;
        }
        index=c*k;
        fi+=k;
        p--;
        c++;
        i=0;
        
    }
    
        for(int i=0;i<n%k/2;i++){
            tmp = arr[index];
            arr[index] = arr[n-1-i];
            arr[n-1-i] = tmp;
            index++;
        }
    }
};