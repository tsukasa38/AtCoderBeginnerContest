#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    int len = S.size();

    for(int i = 0; i < len; ++i) {
        S.at(i) = 'x';
    }

    cout << S << endl;

    return 0;
}
