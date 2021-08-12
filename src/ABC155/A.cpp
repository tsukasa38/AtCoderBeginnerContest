#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    bool b1 = ((A == B) && (B == C));
    bool b2 = ((A != B) && (B != C) && (C != A));

    cout << ((b1 || b2) ? "No" : "Yes") << endl;

    return 0;
}
