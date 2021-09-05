#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    bool is_good = true;

    for(int i = 0; i < 3; ++i) {
        char c1 = S.at(i);
        char c2 = S.at(i+1);

        if(c1 == c2) { is_good = false; }
    }

    cout << (is_good ? "Good" : "Bad") << endl;

    return 0;
}
