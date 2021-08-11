#include <iostream>
using namespace std;

int main() {
    long long N, K;
    cin >> N >> K;

    long long n = N % K;

    cout << ((n < K-n) ? n : K-n) << endl;

    return 0;
}
