#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);

    for(int i = 0; i < N; ++i) {
        cin >> A.at(i);
    }

    int sum = 0;

    for(int i = 0; i < N; ++i) {
        sum += A.at(i);
    }

    sort(A.begin(), A.end());
    reverse(A.begin(), A.end());

    int count = 0;

    for(int i = 0; i < N; ++i) {
        if(sum <= 4*A.at(i)*M) { count += 1; }
    }

    cout << ((count >= M) ? "Yes" : "No") << endl;

    return 0;
}
