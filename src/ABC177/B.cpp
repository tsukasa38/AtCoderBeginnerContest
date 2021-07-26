#include <iostream>
using namespace std;

int exchange_chars_num(string &s, string &t) {
    int len = t.size();
    int min_num = t.size();
    int count = s.size() - t.size() + 1;

    for(int i = 0; i < count; ++i) {
        int num = 0;

        for(int j = 0; j < len; ++j) {
            if(s.at(i+j) != t.at(j)) { ++num; }
        }

        if(min_num > num) { min_num = num; }
    }

    return min_num;
}

int main() {
    string S, T;
    cin >> S >> T;

    int result = exchange_chars_num(S, T);
    cout << result << endl;

    return 0;
}
