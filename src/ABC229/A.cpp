#include <iostream>
using namespace std;

int main() {
    string S1, S2;
    cin >> S1 >> S2;

    int num = 0;
    for(int i = 0; i < 2; ++i) {
        if(S1.at(i) == '#') { ++num; }
        if(S2.at(i) == '#') { ++num; }
    }

    cout << (num == 2 && (S1.at(0) == S2.at(1) || S1.at(1) == S2.at(0)) ? "No" : "Yes") << endl;

    return 0;
}
