#include <iostream>
using namespace std;

int main() {
    int K, X;
    cin >> K >> X;

    cout << ((500*K < X) ? "No" : "Yes") << endl;

    return 0;
}
