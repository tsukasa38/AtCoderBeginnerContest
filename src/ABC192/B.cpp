#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    int len = S.size();
    bool is_illegible_string = true;

    for(int i = 0; i < len; ++i) {
        if(i % 2 == 0 && isupper(S.at(i))) { is_illegible_string = false; break; }
        if(i % 2 == 1 && islower(S.at(i))) { is_illegible_string = false; break; }
    }

    cout << (is_illegible_string ? "Yes" : "No") << endl;

    return 0;
}
