#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;

    int len = str.size();

    reverse(str.begin(), str.end());

    for(int i = 0; i < len; ++i) {
        char c = str.at(i);

        if(c == '6') { str.at(i) = '9'; }
        if(c == '9') { str.at(i) = '6'; }
    }

    cout << str << endl;

    return 0;
}
