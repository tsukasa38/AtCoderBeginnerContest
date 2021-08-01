#include <cmath>
#include <iostream>
using namespace std;

const double EPS = 0.001;

int main() {
    long long A;
    double B;

    cin >> A >> B;

    int C = (int)(B*100 + EPS);
    long long ans = A*C / 100;

    cout << ans << endl;

    return 0;
}
