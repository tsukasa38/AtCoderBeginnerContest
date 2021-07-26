#include <iostream>
using namespace std;

int ctoi(char &c) {
    return c - '0';
}

int main() {
    string N;
    cin >> N;

    int sum = 0;
    int len = N.size();

    for(int i = 0; i < len; ++i) {
        char c = N.at(i);
        sum += ctoi(c);
    }

    cout << ((sum % 9 == 0) ? "Yes" : "No") << endl;

    return 0;
}
