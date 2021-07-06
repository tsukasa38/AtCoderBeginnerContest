#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if(a != b && b != c && c != a) { cout << 0 << endl; }
    else if(a == b) { cout << c << endl; }
    else if(b == c) { cout << a << endl; }
    else if(c == a) { cout << b << endl; }

    return 0;
}
