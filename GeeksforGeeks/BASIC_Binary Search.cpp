/*
https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1
*/

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
       int left=0;
        int right=n-1;
        int mid=(left+right)/2;
        while(right>=left){
          if(k > arr[mid]){
                left=mid+1;
            }else if(k<arr[mid]){
                right=mid-1;
            }else return mid;
            mid=(left+right)/2;
        }
        return -1;
    }
};