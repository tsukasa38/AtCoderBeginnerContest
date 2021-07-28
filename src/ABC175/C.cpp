#include <iostream>
using namespace std;

long long solve(long long &X, long long &K, long long &D) {
    long long count = abs(X) / D;
    long long position = abs(X) % D;

    if(count == K) { return position; }
    if(count > K) { return position + D*(count - K); }

    return (((K - count) % 2 == 0) ? position : abs(position-D));
}

int main() {
    long long X, K, D;
    cin >> X >> K >> D;

    long long ans = solve(X, K, D);

    cout << ans << endl;

    return 0;
}
