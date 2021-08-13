#include <iostream>
using namespace std;

int main() {
    long long A, B, K;
    cin >> A >> B >> K;

    if(A > K) {
        cout << (A - K) << " " << B << endl;
        return 0;
    }

    if(B > (K - A)) {
        cout << 0 << " " << (B - (K - A)) << endl;
        return 0;
    }

    cout << 0 << " " << 0 << endl;
    return 0;
}
