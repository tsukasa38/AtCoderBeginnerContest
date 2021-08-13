#include <vector>
#include <iostream>
using namespace std;

int main() {
    int H, N;
    cin >> H >> N;

    vector<int> A(N);

    for(int i = 0; i < N; ++i) {
        cin >> A.at(i);
    }

    int sum = 0;

    for(int i = 0; i < N; ++i) {
        sum += A.at(i);
    }

    cout << ((sum < H) ? "No" : "Yes") << endl;

    return 0;
}
