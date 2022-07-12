#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int getDigit(int n){
    int d=1;
    while (n/10 != 0){
        d++;
        n=n/10;
    }

return d;}

void operation(int n,int digits){
    int count =0;
    static int c=1;
    int outAr[digits];
    if(digits == 1){
        cout << 1 <<endl;
        cout << n <<endl;
    }else{
        for(int i=0;i<digits;i++){
            if(n%10 != 0){
                count++;

                outAr[i] = (n%10)*c;
                n=n/10;
                c *= 10;
            }else {
                n=n/10;
                c *=10;
                outAr[i] = -1;
            }
        }
        cout << count <<endl;
    for(int i=0;i<digits;i++){
        if(outAr[i] != -1){
            cout << outAr[i] << " ";
        }
    }cout << endl;
    }
    c=1;

}
int main(){
int t;
cin >> t;
for(int i=0;i<t;i++){
    int n,digits;
    cin >> n;
    digits = getDigit(n);
    operation(n,digits);

}
return 0;
}
