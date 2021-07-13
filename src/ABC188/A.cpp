#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    bool is_reversal = false;

    if(X < Y && X+3 > Y) { is_reversal = true; }
    if(Y < X && Y+3 > X) { is_reversal = true; }

    cout << (is_reversal ? "Yes" : "No") << endl;

    return 0;
}
