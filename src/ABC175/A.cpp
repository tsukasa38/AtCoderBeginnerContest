#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    int count = 0;
    int max_count = 0;

    for(int i = 0; i < 3; ++i) {
        char c = S.at(i);

        if(c == 'R') { ++count; }
        if(c == 'S') { count = 0; }

        if(max_count < count) { max_count = count; }
    }

    cout << max_count << endl;

    return 0;
}
