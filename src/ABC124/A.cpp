#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int coin = max(A+A-1, max(A+B, B+B-1));

    cout << coin << endl;

    return 0;
}
