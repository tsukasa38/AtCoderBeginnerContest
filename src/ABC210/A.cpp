#include <iostream>
using namespace std;

int main() {
    int N, A, X, Y;
    cin >> N >> A >> X >> Y;

    cout << ((N >= A) ? A*X + (N - A)*Y : N*X) << endl;

    return 0;
}
