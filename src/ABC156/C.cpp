#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> X(N);

    for(int i = 0; i < N; ++i) {
        cin >> X.at(i);
    }

    int sum = 0;

    for(int i = 0; i < N; ++i) {
        sum += X.at(i);
    }

    int P = round((double)sum / N);

    int stamina = 0;

    for(int i = 0; i < N; ++i) {
        stamina += (X.at(i) - P)*(X.at(i) - P);
    }

    cout << stamina << endl;

    return 0;
}
