
#include <iostream>

using namespace std;

int main()
{
    int w_L, w_B,count=0;
    cin >> w_L >> w_B;
    while (w_B >= w_L){
        w_B *=2;
        w_L *=3;
        count ++;
    }
    cout << count;

    return 0;
}