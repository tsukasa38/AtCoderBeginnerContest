#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int limit = 2*A + 100;

    cout << limit - B << endl;

    return 0;
}
