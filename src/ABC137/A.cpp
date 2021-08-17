#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int max_num = max(A+B, max(A-B, A*B));

    cout << max_num << endl;

    return 0;
}
