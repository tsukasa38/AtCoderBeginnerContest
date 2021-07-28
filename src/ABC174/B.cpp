#include <vector>
#include <iostream>
using namespace std;

int main() {
    long long N, D;
    cin >> N >> D;

    vector<pair<long long, long long>> points(N);

    for(int i = 0; i < N; ++i) {
        long long x, y;
        cin >> x >> y;
        points.at(i) = pair<long long, long long>(x, y);
    }

    int count = 0;

    for(int i = 0; i < N; ++i) {
        long long x = points.at(i).first;
        long long y = points.at(i).second;

        if(x*x + y*y <= D*D) { ++count; }
    }

    cout << count << endl;

    return 0;
}
