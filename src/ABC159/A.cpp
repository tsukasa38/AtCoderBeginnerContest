#include <iostream>
using namespace std;

int permutation(int n, int k) {
    int ans = 1;

    for(int i = 0; i < k; ++i) {
        ans *= n - i;
    }

    return ans;
}

int permutation(int n) {
    return permutation(n, n);
}

int combination(int n, int k) {
    return permutation(n, k) / permutation(k);
}

int main() {
    int N, M;
    cin >> N >> M;

    cout << combination(N, 2) + combination(M, 2) << endl;

    return 0;
}
