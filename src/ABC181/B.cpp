#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> ranges(N);

    for(int i = 0; i < N; ++i) {
        int a, b;
        cin >> a >> b;
        ranges.at(i) = pair<int, int>(a, b);
    }

    long long sum = 0;

    for(int i = 0; i < N; ++i) {
        long long a = ranges.at(i).first;
        long long b = ranges.at(i).second;
        sum += ((b + a) * (b - a + 1)) / 2;
    }

    cout << sum << endl;

    return 0;
}
