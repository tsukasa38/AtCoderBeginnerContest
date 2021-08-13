#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long solve(vector<int> &H, int K) {
    int N = H.size();
    long long count = 0;

    if(N <= K) { return count; }

    sort(H.begin(), H.end());

    for(int i = 0; i < (N-K); ++i) {
        count += H.at(i);
    }

    return count;
}

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> H(N);

    for(int i = 0; i < N; ++i) {
        cin >> H.at(i);
    }

    long long ans = solve(H, K);

    cout << ans << endl;

    return 0;
}
