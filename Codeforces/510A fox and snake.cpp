#include<iostream>
using std::cin;
using std::cout;
using std::endl;

void hashPrint(int c){
    for (int i=0;i<c;i++){
        cout << '#';
    }
}
void dotPrint(int c){
    cout << endl;
    for (int i=0;i<c-1;i++){
        cout << '.';
    }
    cout << '#' << endl;
}
void revDotPrint(int c){
    cout << endl;
    cout << '#';
    for (int i=0;i<c-1;i++){
        cout << '.';
    }
    cout << endl;

}
int main(){
    int n,m,count_dot=0;
    cin >> n >> m;
    while (n > 0){
        hashPrint(m);
        n -= 2;
        if(n>0 || n%2==0){
            if(count_dot == 0){
                dotPrint(m);
                count_dot = 1;
            }

            else {
              revDotPrint(m);
                count_dot = 0;
            }

        }


    }

}
