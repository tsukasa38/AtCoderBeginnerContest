#include <string>
#include <iostream>
using namespace std;

int main() {
    string X;
    cin >> X;

    int len = X.size();
    int decimal_point = -1;

    for(int i = 0; i < len; ++i) {
        if(X.at(i) == '.') { decimal_point = i; }
    }

    if(decimal_point == -1) {
        cout << X << endl;
        return 0;
    }

    if(decimal_point != -1) {
        cout << X.substr(0, decimal_point) << endl;
        return 0;
    }
}
