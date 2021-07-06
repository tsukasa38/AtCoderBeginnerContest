#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    double energy = (double)A / 100;

    cout << energy*B << endl;

    return 0;
}
