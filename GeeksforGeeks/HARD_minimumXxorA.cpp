/*
https://practice.geeksforgeeks.org/problems/x-xor-a-is-minimum-and-set-bits-in-x-b/1
*/

class Solution {
  public:
     int BitsSetTable256[256];

// Function to initialise the lookup table
void initialize()
{
    int i=0;
	// To initially generate the
	// table algorithmically
		BitsSetTable256[0] = 0;
	for (int i = 0; i < 256; i++)
	{
		BitsSetTable256[i] = (i & 1) +
		BitsSetTable256[i / 2];
	}
}

// Function to return the count
// of set bits in n
int getSetBit(int n)
{
	return (BitsSetTable256[n & 0xff] +
			BitsSetTable256[(n >> 8) & 0xff] +
			BitsSetTable256[(n >> 16) & 0xff] +
			BitsSetTable256[n >> 24]);
}
int cntBit(int num){
        int cnt=0;
        while(num!=0){
            num=num>>1;
            cnt++;
        }
        return cnt;
    }
    int minVal(int a, int b) {
        initialize();
        int setBit_b = getSetBit(b);
        int x=a,p,q;
        int setBit_x = getSetBit(x);
        int cntBit_a = cntBit(a);
       

if(setBit_b > cntBit_a){ x=x<<(setBit_b-cntBit_a)&(1<<setBit_b) ;}
    while(setBit_x != setBit_b){
        if(setBit_b > cntBit_a){ x++;}
        else{
               if(setBit_x > setBit_b) x--;
               else x++;
        }
        setBit_x = getSetBit(x);
    }
        
       return x; 
    }
};