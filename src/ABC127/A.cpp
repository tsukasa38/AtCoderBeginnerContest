#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int fee = 0;

    if(A >= 13) { fee = B; }
    if(6 <= A && A <= 12) { fee = B / 2; }

    cout << fee << endl;

    return 0;
}
