/*
https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1
*/

class Solution {

    
    // a: input array
    // n: size of array
    // Function to find equilibrium point in the array.
    public static int equilibriumPoint(long arr[], int n) {

        if(n==1)return 1;
        
       long sumR=0,t_sum=0;
       for(int i=0;i<n;i++){
           t_sum+=arr[i];
       }
       int i=0;
       while(i<n)
       {
           t_sum-=arr[n-1-i];
           if(i>0){
             if(t_sum == sumR){
                 return n-i;
             }  
           }
           sumR+=arr[n-1-i];
           i++;
    }
    return -1;
 }
}