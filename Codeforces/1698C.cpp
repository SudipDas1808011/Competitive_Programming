#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

/************** unsolved *********************/
int main()
{
    int tc,n,c=0,k=1;
    long int tmp;
    bool x;
    vector <long int> v1,vsum;
    cin>>tc;
    for(int z=1; z<=tc; z++)
    {
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>tmp;
            v1.push_back(tmp);
        }
        for(int i=v1.size()-1; i>=0; i--)
        {
            for(int j=i-1; j>0; j--)
            {
                vsum.push_back(v1[i]+v1[j]+v1[j-1]);
            }
        }
        sort(v1.begin(),v1.end());
        for(int i=0;i<vsum.size();i++){
            x = binary_search(v1.begin(),v1.end(),vsum[i]);
            if(!x){cout<<"NO"<<endl;k=0;break;}
        }


        if(k!=0) cout<<"YES"<<endl;
        v1.clear();
        vsum.clear();
        k=1;
    }


    return 0;
}












/*
//time limit exceeded



*/
