#include <iostream>
using namespace std;

int main() {
    int K;
    string S;
    cin >> K >> S;

    int len = S.size();

    if(len <= K) { cout << S << endl; }
    else { cout << S.substr(0, K) + "..." << endl; }

    return 0;
}
