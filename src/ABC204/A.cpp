#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if(x == y) { cout << x << endl; }
    if(x == 0 && y == 1) { cout << 2 << endl; }
    if(x == 0 && y == 2) { cout << 1 << endl; }
    if(x == 1 && y == 0) { cout << 2 << endl; }
    if(x == 1 && y == 2) { cout << 0 << endl; }
    if(x == 2 && y == 0) { cout << 1 << endl; }
    if(x == 2 && y == 1) { cout << 0 << endl; }

    return 0;
}
