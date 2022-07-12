#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int n,m=0,c=0,tempM,tempC;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> tempM;
        cin >> tempC;
        if(tempM > tempC) m++;
        else if(tempC > tempM) c++;
    }
    if(m > c) cout << "Mishka";
    else if(c > m) cout << "Chris";
    else cout << "Friendship is magic!^^";
}
