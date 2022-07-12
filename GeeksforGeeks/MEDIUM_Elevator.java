/*
https://practice.geeksforgeeks.org/problems/reaching-the-heights1921/1#
*/

class Complete{
    
   
    // Function for finding maximum and value pair
    public static ArrayList<Integer> reaching_height (int n, int ar[]) {
        Arrays.sort(ar);
        ArrayList<Integer> arrayList = new ArrayList<>();
        int gndChk = 0;

        for (int i = 0; i < n / 2; i++) {
            arrayList.add(ar[n - 1 - i]);
            gndChk += ar[n - 1 - i];
            arrayList.add(ar[i]);
            gndChk -= ar[i];

            if (gndChk == 0) {
                ArrayList<Integer> arrayList0 = new ArrayList<>();
                arrayList0.add(-1);
                return arrayList0 ;
            }

        }
        if (n % 2 != 0) 
            arrayList.add(ar[n / 2]);
            
            return arrayList;
        
        
    }
    
    
}
