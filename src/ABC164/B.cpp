#include <iostream>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int attack1 = ((C % B == 0) ? (C / B) : (C / B + 1));
    int attack2 = ((A % D == 0) ? (A / D) : (A / D + 1));

    cout << ((attack1 <= attack2) ? "Yes" : "No") << endl;

    return 0;
}
