#include <iostream>
using namespace std;

bool check_palindrome(string &str) {
    int len = str.size();
    int loop_count = len / 2;

    for(int i = 0; i < loop_count; ++i) {
        if(str.at(i) != str.at(len - i - 1)) { return false; }
    }

    return true;
}

int main() {
    int N;
    cin >> N;

    string str = to_string(N);

    int len = str.size();
    bool is_palindrome = false;

    is_palindrome = check_palindrome(str);

    for(int i = 0; i < len; ++i) {
        if(is_palindrome) { break; }

        str = "0" + str;
        is_palindrome = check_palindrome(str);
    }

    cout << (is_palindrome ? "Yes" : "No") << endl;

    return 0;
}
