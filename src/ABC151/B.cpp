#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N, K, M;
    cin >> N >> K >> M;

    vector<int> A(N-1);

    for(int i = 0; i < (N-1); ++i) {
        cin >> A.at(i);
    }

    int sum = 0;

    for(int i = 0; i < (N-1); ++i) {
        sum += A.at(i);
    }

    int score = N*M - sum;

    cout << ((score <= K) ? max(0, score) : -1) << endl;

    return 0;
}
