/*
https://practice.geeksforgeeks.org/problems/convert-array-into-zig-zag-fashion1638/1
*/


class Solution {
    int[] swapAr(int[] arr,int index){
        int tmp;
        tmp = arr[index];
        arr[index] = arr[index+1];
        arr[index+1] = tmp;
        
        return arr;
    }
    void zigZag(int arr[], int n) {
        int cnt=0;
        for(int i=0;i<n-1;i++){
            if(cnt%2==0){
                if(arr[i]>arr[i+1]) swapAr(arr,i);
            }else{
                if(arr[i]<arr[i+1]) swapAr(arr,i);
            }
            cnt++;
        }
    }

}