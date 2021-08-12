#include <iostream>
using namespace std;

bool is_palindrome(string &S, int s, int e) {
    int count = (e - s + 1)/2;

    for(int i = 0; i < count; ++i) {
        int index1 = s + i;
        int index2 = e - i;
        if(S.at(index1) != S.at(index2)) { return false; }
    }

    return true;
}

bool is_strong_palindrome(string &S) {
    int N = S.size();

    bool b1 = is_palindrome(S, 0, N-1);
    bool b2 = is_palindrome(S, 0, ((N-1)/2)-1);
    bool b3 = is_palindrome(S, ((N+3)/2)-1, N-1);

    return b1 && b2 && b3;
}

int main() {
    string S;
    cin >> S;

    bool ans = is_strong_palindrome(S);

    cout << (ans ? "Yes" : "No") << endl;

    return 0;
}
