#include <iostream>
using namespace std;

int main() {
    long long N, A, B;
    cin >> N >> A >> B;

    long long quotient = N / (A + B);
    long long remainder = N % (A + B);

    long long ans = A*quotient + ((remainder < A) ? remainder : A);

    cout << ans << endl;

    return 0;
}
