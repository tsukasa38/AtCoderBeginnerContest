#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int L;
    cin >> L;

    double l = (double)L / 3;
    double ans = l*l*l;

    cout << fixed << setprecision(12) << ans << endl;

    return 0;
}
