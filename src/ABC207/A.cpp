#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int max_num = A + B + C - min(A, min(B, C));

    cout << max_num << endl;

    return 0;
}
