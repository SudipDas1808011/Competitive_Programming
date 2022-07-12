#include<iostream>

using namespace std;
void X(int target){
    int a=0,b=0,c=0;
    if(target%2==0){
            c=target/2;
        cout<<0<<" "<<0<<" "<<c<<endl;
        return;
    }
    else{
        cout<<-1<<endl;
    }
}
int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        X(n);
    }

return 0;
}
