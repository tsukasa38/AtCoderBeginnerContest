#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long factorial(long long n) {
    if(n == 0) { return 1; }
    else { return n * factorial(n-1); }
}

long long permutation(int n, int r) {
    long long ans = 1;

    for(int i = 0; i < r; ++i) {
        ans *= (n - i);
    }

    return ans;
}

long long combination(int n, int r) {
    if(n < r) { return 1; }
    else { return permutation(n, r) / factorial(r); }
}

int main() {
    int N;
    cin >> N;

    vector<string> s(N);

    for(int i = 0; i < N; ++i) {
        cin >> s.at(i);
    }

    for(int i = 0; i < N; ++i) {
        sort(s.at(i).begin(), s.at(i).end());
    }

    sort(s.begin(), s.end());

    int num = 0;
    long long count = 0;

    for(int i = 0; i < (N-1); ++i) {
        if(s.at(i) == s.at(i+1)) { num += ((num == 0) ? 2 : 1); }
        else { count += ((num == 0) ? 0 : combination(num, 2)); num = 0; }
    }

    count += ((num == 0) ? 0 : combination(num, 2));

    cout << count << endl;

    return 0;
}
