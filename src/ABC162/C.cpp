#include <vector>
#include <iostream>
using namespace std;

int gcd(vector<vector<int>> &GCD, int x, int y) {
    if(GCD.at(x-1).at(y-1) != -1) {
        return GCD.at(x-1).at(y-1);
    }

    if(x % y == 0) {
        GCD.at(x-1).at(y-1) = y;
        GCD.at(y-1).at(x-1) = y;
        return y;
    }

    int num = gcd(GCD, y, x % y);
    GCD.at(x-1).at(y-1) = num;
    GCD.at(y-1).at(x-1) = num;
    return num;
}

int solve(int K) {
    int sum = 0;
    vector<vector<int>> GCD(K, vector<int>(K, -1));

    for(int i = 1; i <= K; ++i) {
        for(int j = 1; j <= K; ++j) {
            for(int k = 1; k <= K; ++k) {
                sum += gcd(GCD, i, gcd(GCD, j, k));
            }
        }
    }

    return sum;
}

int main() {
    int K;
    cin >> K;

    int ans = solve(K);

    cout << ans << endl;

    return 0;
}
