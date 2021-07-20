#include <iostream>
using namespace std;

int ctoi(char &c) {
    return c - '0';
}

int main() {
    string N;
    cin >> N;

    int k = N.size();
    int min_del_digits = 20;

    for(int bit = 1; bit < (1 << k); ++bit) {
        int sum = 0;
        int del_digits = 0;

        for(int i = 0; i < k; ++i) {
            if(bit & (1 << i)) { sum += ctoi(N.at(i)); }
            else { del_digits += 1; }
        }

        if(sum % 3 == 0 && min_del_digits > del_digits) { min_del_digits = del_digits; }
    }

    if(min_del_digits == 20) { min_del_digits = -1; }

    cout << min_del_digits << endl;

    return 0;
}
