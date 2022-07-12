/*
https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1
*/
class Solution {
    int MissingNumber(int array[], int n) {
        int sum=0,i=0;
        int sum_order=n*(n+1)/2;
        n--;
        while(n!=0){sum+=array[i];i++;n--;}
        return (sum_order - sum);
    }
}