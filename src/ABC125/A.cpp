#include <iostream>
using namespace std;

int main() {
    int A, B, T;
    cin >> A >> B >> T;

    int times = T / A;

    cout << B * times << endl;

    return 0;
}
