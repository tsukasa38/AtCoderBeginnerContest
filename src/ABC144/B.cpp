#include <iostream>
using namespace std;

bool solve(int N) {
    for(int i = 1; i <= 9; ++i) {
        for(int j = 1; j <= 9; ++j) {
            if(i*j == N) { return true; }
        }
    }

    return false;
}

int main() {
    int N;
    cin >> N;

    bool ans = solve(N);

    cout << (ans ? "Yes" : "No") << endl;

    return 0;
}
