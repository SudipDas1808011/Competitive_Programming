/*
https://practice.geeksforgeeks.org/contest/interview-series-56/problems
*/

class Solution {
    public static int minimumInteger(int N, int[] A) {
        int k=0;
        float s=0;
        ArrayList<Integer> al = new ArrayList<Integer>();
        for(int x:A) s+=x;
        float minVal=s/N;
        for(int i=0;i<N;i++){
            if(A[i]>=Math.ceil(minVal)){
              al.add(A[i]);  
            }
        }
        Collections.sort(al);
        return al.get(0);
    }
}