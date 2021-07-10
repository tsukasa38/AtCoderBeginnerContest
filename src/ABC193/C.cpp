#include <set>
#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    long N;
    cin >> N;

    long sqrt_N = sqrt(N);
    set<long> perfect_power_set;

    for(long i = 2; i <= sqrt_N; ++i) {
        int count = 0;
        long perfect_power = i;

        while(perfect_power * i <= N) {
            perfect_power *= i;
            perfect_power_set.insert(perfect_power);
        }
    }

    long perfect_power_num = perfect_power_set.size();

    cout << N - perfect_power_num << endl;

    return 0;
}
