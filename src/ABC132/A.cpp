#include <map>
#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    map<char, int> char_map;

    for(int i = 0; i < 4; ++i) {
        char c = S.at(i);

        if(!char_map.count(c)) { char_map[c] = 1; }
        else { char_map[c] += 1; }
    }

    int count = 0;

    for(const auto &[key, value]: char_map) {
        if(value == 2) { ++count; }
    }

    cout << ((count == 2) ? "Yes" : "No") << endl;

    return 0;
}
