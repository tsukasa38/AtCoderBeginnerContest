#include <iostream>
using namespace std;

int solve(int L, int R) {
    int range = R - L;

    if(range >= 2019) { return 0; }

    int min_num = 2019 * 2019;

    for(int i = L; i <= R; ++i) {
        for(int j = i+1; j <= R; ++j) {
            int r1 = i % 2019;
            int r2 = j % 2019;
            min_num = min(min_num, (r1 * r2) % 2019);
        }
    }

    return min_num;
}

int main() {
    int L, R;
    cin >> L >> R;

    int ans = solve(L, R);

    cout << ans << endl;

    return 0;
}
