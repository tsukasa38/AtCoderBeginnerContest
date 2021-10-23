#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    int len = S.size();

    if(S.substr(len-2) == "er") { cout << "er" << endl; }
    else if(S.substr(len-3) == "ist") { cout << "ist" << endl; }

    return 0;
}
