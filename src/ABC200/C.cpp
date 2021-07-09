#include <vector>
#include <iostream>
using namespace std;

long factorial(int n) {
    long num = 1;

    for(int i = 1; i <= n; ++i) {
        num *= i;
    }

    return num;
}

long permutation(int n, int r) {
    long num = 1;

    for(int i = 0; i < r; ++i) {
        num *= n-i;
    }

    return num;
}

long combination(int n, int r) {
    long denominator = factorial(r);
    long numerator = permutation(n, r);
    return numerator / denominator;
}

int main() {
    int N;
    cin >> N;

    vector<int> A(N);

    for(int i = 0; i < N; ++i) {
        cin >> A.at(i);
    }

    long num = 0;
    vector<int> counts_rem(200, 0);

    for(int i = 0; i < N; ++i) {
        int rem = A.at(i) % 200;
        counts_rem.at(rem) += 1;
    }

    for(int i = 0; i < 200; ++i) {
        int count = counts_rem.at(i);
        if(count >= 2) { num += combination(count, 2); }
    }

    /*
    // TLE O(N^2)
    for(int i = 0; i < N; ++i) {
        for(int j = i+1; j < N; ++j) {
            int diff = A.at(i) - A.at(j);
            if(diff % 200 == 0) { ++num; }
        }
    }
    */

    cout << num << endl;

    return 0;
}
