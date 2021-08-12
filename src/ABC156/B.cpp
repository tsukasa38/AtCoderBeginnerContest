#include <cmath>
#include <iostream>
using namespace std;

double log(int X, int base) {
    return log(X) / log(base);
}

int main() {
    int N, K;
    cin >> N >> K;

    int e = log(N, K);

    cout << e+1 << endl;

    return 0;
}
