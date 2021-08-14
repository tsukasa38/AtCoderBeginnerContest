#include <iostream>
using namespace std;

bool solve(string &S) {
    int N = S.size();

    for(int i = 0; i < N; ++i) {
        if(S.substr(0, i) == S.substr(i)) { return true; }
    }

    return false;
}

int main() {
    int N;
    string S;
    cin >> N >> S;

    bool ans = solve(S);

    cout << (ans ? "Yes" : "No") << endl;

    return 0;
}
