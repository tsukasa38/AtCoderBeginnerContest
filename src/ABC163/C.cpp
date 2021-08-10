#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N-1);

    for(int i = 0; i < N-1; ++i) {
        cin >> A.at(i);
    }

    vector<int> B(N, 0);

    for(int i = 0; i < N-1; ++i) {
        int j = A.at(i);
        B.at(j-1) += 1;
    }

    for(int i = 0; i < N; ++i) {
        cout << B.at(i) << endl;
    }

    return 0;
}
