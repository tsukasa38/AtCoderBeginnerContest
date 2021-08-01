#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const long long MAX = 1000000000000000000;

int main() {
    int N;
    cin >> N;

    vector<long long> A(N);

    for(int i = 0; i < N; ++i) {
        cin >> A.at(i);
    }

    sort(A.begin(), A.end());

    long long ans = 1;

    for(int i = 0; i < N; ++i) {
        long long num = A.at(i);

        if(num == 0) { ans = 0; break; }
        if(ans > MAX / num) { ans = -1; break; }

        ans *= num;
    }

    cout << ans << endl;

    return 0;
}
