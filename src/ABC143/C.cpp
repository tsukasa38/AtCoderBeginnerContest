#include <iostream>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    int ans = 0;

    for(int i = 0; i < N; ++i) {
        int count = 0;

        for(int j = i; j < (N-1); ++j) {
            if(S.at(j) == S.at(j+1)) { ++count; }
            else { break; }
        }

        i += count;
        ans += 1;
    }

    cout << ans << endl;

    return 0;
}
