#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    int len = S.size();

    cout << ((S.at(len-1) == 's') ? S + "es" : S + "s") << endl;

    return 0;
}
