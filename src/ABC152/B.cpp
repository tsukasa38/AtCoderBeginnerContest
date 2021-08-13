#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    string A = "";
    string B = "";

    for(int i = 0; i < b; ++i) {
        A += to_string(a);
    }

    for(int i = 0; i < a; ++i) {
        B += to_string(b);
    }

    cout << ((A < B) ? A : B) << endl;

    return 0;
}
