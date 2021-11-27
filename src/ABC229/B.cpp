#include <iostream>
#include <algorithm>
using namespace std;

int ctoi(char &c) {
    return c - '0';
}

int main() {
    string A, B;
    cin >> A >> B;

    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    bool is_hard = false;
    int len = min(A.size(), B.size());

    for(int i = 0; i < len; ++i) {
        int a = ctoi(A.at(i));
        int b = ctoi(B.at(i));
        if(a + b >= 10) { is_hard = true; }
    }

    cout << (is_hard ? "Hard" : "Easy") << endl;

    return 0;
}
