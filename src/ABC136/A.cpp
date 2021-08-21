#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int num = C - (A - B);

    cout << ((num > 0) ? num : 0) << endl;

    return 0;
}
