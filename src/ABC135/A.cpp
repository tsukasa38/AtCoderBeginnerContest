#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int K = (A + B) / 2;

    if(abs(A - K) == abs(B - K)) { cout << K << endl; }
    else { cout << "IMPOSSIBLE" << endl; }

    return 0;
}
