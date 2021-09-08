#include <vector>
#include <iostream>
using namespace std;

int gcd(int x, int y) {
    if(x % y == 0) { return y; }
    else { return gcd(y, x % y); }
}

int main() {
    int N;
    cin >> N;

    vector<int> A(N);

    for(int i = 0; i < N; ++i) {
        cin >> A.at(i);
    }

    vector<int> L(N);
    vector<int> R(N);

    L.at(0) = A.at(0);
    R.at(0) = A.at(N-1);

    for(int i = 1; i < N; ++i) {
        L.at(i) = gcd(L.at(i-1), A.at(i));
    }

    for(int i = 1; i < N; ++i) {
        R.at(i) = gcd(R.at(i-1), A.at(N - i - 1));
    }

    int max_gcd = max(L.at(N-2), R.at(N-2));

    for(int i = 0; i < (N-2); ++i) {
        max_gcd = max(max_gcd, gcd(L.at(i), R.at(N - i - 3)));
    }

    cout << max_gcd << endl;

    return 0;
}
