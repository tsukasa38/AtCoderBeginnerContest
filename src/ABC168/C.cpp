#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int A, B, H, M;
    cin >> A >> B >> H >> M;

    // double angle1 = H*360 / 12 + (double)M*30 / 60;
    // double angle2 = M*360 / 60;

    double angle1 = H*30 + (double)M / 2;
    double angle2 = M*6;

    double diff = abs(angle1 - angle2);

    double dist = sqrt(A*A + B*B - 2*A*B*cos(M_PI*diff / 180));

    cout << fixed << setprecision(20) << dist << endl;

    return 0;
}
