#include <cmath>
#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long n = sqrt(N);
    long long min_count = 1000000000000;

    for(int x = 1; x <= n; ++x) {
        if(N % x == 0) {
            long long y = N / x;
            long long count = (x-1) + (y-1);
            min_count = min(count, min_count);
        }
    }

    cout << min_count << endl;

    return 0;
}
