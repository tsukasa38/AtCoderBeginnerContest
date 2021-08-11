#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    int coin500 = X / 500;
    int coin5 = (X % 500) / 5;

    cout << 1000*coin500 + 5*coin5 << endl;

    return 0;
}
