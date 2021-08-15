#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> B(N-1);

    for(int i = 0; i < (N-1); ++i) {
        cin >> B.at(i);
    }

    vector<int> A(N);

    for(int i = 0; i < (N-1); ++i) {
        if(i == 0) { A.at(0) = B.at(0); }

        A.at(i) = min(A.at(i), B.at(i));
        A.at(i+1) = B.at(i);
    }

    int sum = 0;

    for(int i = 0; i < N; ++i) {
        sum += A.at(i);
    }

    cout << sum << endl;

    return 0;
}
