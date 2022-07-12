/*
https://practice.geeksforgeeks.org/contest/interview-series-58/problems
*/
class Solution{
public:
    
    int maxInstance(string s){
        map<char,int> mp1={{'a',1},{'b',1},{'l',2},{'n',1},{'o',2}};
        map<char,int> mp2;
        int ltrAr[5]={'a','b','l','n','o'};
        int ltrCnt[5];
        int slen = s.length();
        int cnt=0,res=0;
        bool x=true;
        //counting elements and insert in map2
        for(int i=0;i<5;i++){
            for(int j=0;j<slen;j++){
                if(ltrAr[i]==s[j]){
                    cnt++;
                }
            }mp2.insert({ltrAr[i],cnt});
            cnt=0;
        }
        /*******************************/
                           //calculation of forming
        for(int i=0;i<5;i++){
            int tmp=mp1.at(ltrAr[i]);
            int count = mp2.at(ltrAr[i])/tmp;
            int rem = mp2.at(ltrAr[i])%tmp;
            mp2.insert({ltrAr[i],rem});
            ltrCnt[i]=count;
            }
        for(int i=0;i<5;i++){
            if(ltrCnt[i]==0) ltrCnt[0]=0;
        }
        sort(ltrCnt,ltrCnt+5);
        res=ltrCnt[0];
        
        
        return res;
    }
};