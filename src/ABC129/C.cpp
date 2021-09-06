#include <vector>
#include <iostream>
using namespace std;

const int MOD = 1000000007;

int solve(int N, int M, vector<int> &a) {
    vector<int> dp(N+1, 1);

    dp.at(0) = 1;
    dp.at(1) = 1;

    for(int i = 0; i < M; ++i) {
        int broken_stair = a.at(i);
        dp.at(broken_stair) = 0;
    }

    for(int i = 2; i <= N; ++i) {
        if(dp.at(i) != 0) {
            long long stair1 = dp.at(i-1) % MOD;
            long long stair2 = dp.at(i-2) % MOD;
            dp.at(i) = (stair1 + stair2) % MOD;
        }
    }

    return dp.at(N);
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> a(M);

    for(int i = 0; i < M; ++i) {
        cin >> a.at(i);
    }

    int ans = solve(N, M, a);

    cout << ans << endl;

    return 0;
}
