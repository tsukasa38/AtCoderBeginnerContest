#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    int A = 0;
    int B = 0;

    for(char c: S) {
        if(c == 'A') { ++A; }
        if(c == 'B') { ++B; }
    }

    cout << (((A == 0) || (B == 0)) ? "No" : "Yes") << endl;

    return 0;
}
