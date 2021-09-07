#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    double P = 0;

    for(int i = 1; i <= N; ++i) {
        int score = i;
        int count = 0;

        while(score < K) {
            score *= 2;
            ++count;
        }

        P += 1.0 / pow(2, count);
    }

    P /= N;

    cout << fixed << setprecision(12) << P << endl;

    return 0;
}
