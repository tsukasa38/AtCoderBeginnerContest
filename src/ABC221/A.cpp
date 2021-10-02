#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int diff = A - B;
    int enegy = pow(32, diff);

    cout << enegy << endl;

    return 0;
}
