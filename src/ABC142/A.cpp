#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    double P = ((N % 2 == 0) ? (((double)N / 2) / N) : (((double)(N + 1) / 2) / N));

    cout << fixed << setprecision(10) << P << endl;

    return 0;
}
