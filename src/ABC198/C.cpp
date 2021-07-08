#include <cmath>
#include <iostream>
using namespace std;

int main() {
    long R, X, Y;
    cin >> R >> X >> Y;

    double distance = sqrt(X*X + Y*Y);
    int min_step = ceil(distance / R);

    if(min_step == 1 && distance < R) { ++min_step; }

    cout << min_step << endl;

    return 0;
}
