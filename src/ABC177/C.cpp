#include <vector>
#include <iostream>
using namespace std;

long long CONST = 1000000007;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);

    for(int i = 0; i < N; ++i) {
        cin >> A.at(i);
    }

    int sum = 0;
    vector<int> cumulative_sum(N);

    for(int i = 0; i < N; ++i) {
        sum = (sum + A.at(i)) % CONST;
        cumulative_sum.at(i) = sum;
    }

    long long ans = 0;

    for(int i = 0; i < N-1; ++i) {
        long long num = cumulative_sum.at(i);
        ans = (ans + A.at(i+1) * num) % CONST;
    }

    cout << ans << endl;

    return 0;
}
