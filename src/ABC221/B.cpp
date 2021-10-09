#include <iostream>
using namespace std;

void swap(string &S, int i, int j) {
    char c = S.at(i);
    S.at(i) = S.at(j);
    S.at(j) = c;
}

bool solve(string S, string T) {
    if(S == T) { return true; }

    int len = S.size();

    for(int i = 0; i < len-1; ++i) {
        swap(S, i, i+1);

        if(S == T) { return true; }
        else { swap(S, i, i+1); }
    }

    return false;
}

int main() {
    string S, T;
    cin >> S >> T;

    bool ans = solve(S, T);

    cout << (ans ? "Yes" : "No") << endl;

    return 0;
}
