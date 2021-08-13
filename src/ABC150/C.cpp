#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> P(N);
    vector<int> Q(N);
    vector<int> R(N);

    for(int i = 0; i < N; ++i) {
        cin >> P.at(i);
    }

    for(int i = 0; i < N; ++i) {
        cin >> Q.at(i);
    }

    for(int i = 0; i < N; ++i) {
        R.at(i) = i+1;
    }

    int a, b;
    int count = 0;

    do {
        count += 1;
        if(P == R) { a = count; }
        if(Q == R) { b = count; }
    } while (next_permutation(R.begin(), R.end()));

    cout << abs(a - b) << endl;

    return 0;
}
