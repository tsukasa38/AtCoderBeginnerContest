#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int W, H, x, y;
    cin >> W >> H >> x >> y;

    double max_area = (double)W * (double)H / 2;
    bool is_center_point = ((2*x == W) && (2*y == H));

    cout << fixed << setprecision(6) << max_area << " " << is_center_point << endl;

    return 0;
}
