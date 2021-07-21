#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long N;
    cin >> N;

    int num = sqrt(N);

    vector<long long> common_divisors;

    for(long long i = 1; i <= num; ++i) {
        if(N % i == 0) {
            long long j = N / i;
            common_divisors.push_back(i);

            if(i != j) {
                common_divisors.push_back(j);
            }
        }
    }

    sort(common_divisors.begin(), common_divisors.end());

    for(long long num: common_divisors) {
        cout << num << endl;
    }

    return 0;
}
