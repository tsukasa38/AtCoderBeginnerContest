#include <iostream>
using namespace std;

int solve(int A, int B) {
    for(int x = 1; x <= 1000; ++x) {
        int calcA = 0.08*x;
        int calcB = 0.10*x;
        if(calcA == A && calcB == B) { return x; }
    }

    return -1;
}

int main() {
    int A, B;
    cin >> A >> B;

    int ans = solve(A, B);

    cout << ans << endl;

    return 0;
}
