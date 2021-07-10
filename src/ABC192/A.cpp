#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    cout << ((X % 100 == 0) ? 100 : (100 - (X % 100))) << endl;

    return 0;
}
