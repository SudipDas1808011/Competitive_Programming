

class Solution
{   
    
    static int[] sorting012(int[] ar,int minVal,int minIdx,int maxVal){
        if(minVal>maxVal)return ar;
        int len=ar.length;
        int tmpVal=0;
        for (int i = 0; i <len; i++) {
            if(ar[i]==minVal){
                tmpVal=ar[minIdx];
                ar[minIdx]=minVal;
                ar[i]=tmpVal;
                minIdx++;
            }
        }minVal++;

        sorting012(ar,minVal,minIdx,maxVal);

        return ar;
    }
    
    public static void sort012(int a[], int n)
    {
        
        a = sorting012(a,0,0,2);
    }
}