#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    cout << ((X % 100 == 0) && (X / 100 != 0) ? "Yes" : "No") << endl;

    return 0;
}
