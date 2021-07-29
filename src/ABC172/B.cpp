#include <iostream>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    int count = 0;
    int len = S.size();

    for(int i = 0; i < len; ++i) {
        if(S.at(i) != T.at(i)) { ++count; }
    }

    cout << count << endl;

    return 0;
}
