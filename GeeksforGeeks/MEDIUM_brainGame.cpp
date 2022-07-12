/*
https://practice.geeksforgeeks.org/problems/brain-game1742/1
*/

class Solution{
	public:
    int myFunc(int n)
    {
        if(n == 1) return 0;
        int c=2;
        vector<int>v;
        while(n>1)
        {
            if(n%c==0){
            v.push_back(c);
            n/=c;
            }
            else c++;
        }
        return v.size()-1;
    }
    bool brainGame(vector<int>nums) {
        int sz = 0,cnt = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        sz = myFunc(nums[i]);
        cnt ^= sz;
        
    }
    if(cnt!= 0) return 1;
    return 0;
    }
};