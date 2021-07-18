#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    long sx, sy, gx, gy;
    cin >> sx >> sy >> gx >> gy;

    double x = (double)(sy*(gx - sx)) / (gy + sy) + sx;

    cout << setprecision(12) << x << endl;

    return 0;
}
