#include <iostream>
using namespace std;

bool solve(string &S) {
    int len = S.size();

    for(int i = 0; i < len; ++i) {
        char c = S.at(i);

        if((i % 2) == 0 && c != 'R' && c != 'U' && c != 'D') { return false; }
        if((i % 2) == 1 && c != 'L' && c != 'U' && c != 'D') { return false; }
    }

    return true;
}

int main() {
    string S;
    cin >> S;

    bool ans = solve(S);

    cout << (ans ? "Yes" : "No") << endl;

    return 0;
}
