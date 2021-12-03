#include <iostream>
using namespace std;

bool solve(string &S) {
    int N = S.size();

    string T = "oxxox";

    bool is_substring = true;

    for(int i = 0; i < 3; ++i) {
        is_substring = true;

        for(int j = 0; j < N; ++j) {
            if(T.at((j % 3) + i) != S.at(j)) { is_substring = false; }
        }
        
        if(is_substring) { return true; }
    }

    return false;
}

int main() {
    string S;
    cin >> S;

    bool ans = solve(S);

    cout << (ans ? "Yes" : "No") << endl;

    return 0;
}
