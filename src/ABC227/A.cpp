#include <iostream>
using namespace std;

int main() {
    int N, K, A;
    cin >> N >> K >> A;

    int ans = A;

    while(K > 1) {
        if(ans == N) { ans = 1; }
        else { ans += 1; }
        --K;
    }

    cout << ans << endl;

    return 0;
}
