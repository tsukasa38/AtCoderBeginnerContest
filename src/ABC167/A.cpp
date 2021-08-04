#include <iostream>
using namespace std;

bool solve(string &S, string &T) {
    int len = S.size();
    char c = T.at(len-1);
    return (S == T.substr(0, len) && islower(c));
}

int main() {
    string S, T;
    cin >> S >> T;

    bool ans = solve(S, T);

    cout << (ans ? "Yes" : "No") << endl;

    return 0;
}
