#include <vector>
#include <iomanip>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> v(N);

    for(int i = 0; i < N; ++i) {
        cin >> v.at(i);
    }

    sort(v.begin(), v.end());

    double max_value = v.at(0);

    for(int i = 1; i < N; ++i) {
        double value = v.at(i);
        max_value = (max_value + value) / 2;
    }

    cout << fixed << setprecision(10) << max_value << endl;

    return 0;
}
