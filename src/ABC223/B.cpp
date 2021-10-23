#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    int len = S.size();

    string min_str = S;
    string max_str = S;

    for(int i = 0; i < len; ++i) {
        string str = S.substr(len-i-1) + S.substr(0, len-i-1);
        
        if(str < min_str) { min_str = str; }
        if(str > max_str) { max_str = str; }
    }

    cout << min_str << endl;
    cout << max_str << endl;

    return 0;
}
