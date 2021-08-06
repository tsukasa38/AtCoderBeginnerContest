#include <iostream>
using namespace std;

int solve(int A, int B, int C, int K) {
    if(A >= K) { return K; }
    if(A + B >= K) { return A; }
    return 2*A + B - K;
}

int main() {
    int A, B, C, K;
    cin >> A >> B >> C >> K;

    int num = solve(A, B, C, K);

    cout << num << endl;

    return 0;
}
