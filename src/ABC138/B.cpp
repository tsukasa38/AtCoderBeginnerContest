#include <vector>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);

    for(int i = 0; i < N; ++i) {
        cin >> A.at(i);
    }

    double sum = 0;

    for(int i = 0; i < N; ++i) {
        sum += 1.0 / A.at(i);
    }

    cout << fixed << setprecision(14) << 1.0 / sum << endl;

    return 0;
}
