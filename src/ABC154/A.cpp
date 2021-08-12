#include <iostream>
using namespace std;

int main() {
    int A, B;
    string S, T, U;
    cin >> S >> T >> A >> B >> U;

    if(S == U) { --A; }
    if(T == U) { --B; }

    cout << A << " " << B << endl;

    return 0;
}
