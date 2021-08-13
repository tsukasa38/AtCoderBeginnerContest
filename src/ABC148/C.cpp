#include <iostream>
using namespace std;

int gcd(long long a, long long b) {
    if(b == 0) { return a; }
    else { return gcd(b, a % b); }
}

int main() {
    long long A, B;
    cin >> A >> B;

    long long d = gcd(A, B);

    cout << ((A * B) / d) << endl;

    return 0;
}
