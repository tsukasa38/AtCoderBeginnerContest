#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);

    for(int i = 0; i < N; ++i) {
        cin >> A.at(i);
    }

    int num = 0;

    // TLE O(N^2)
    for(int i = 0; i < N; ++i) {
        for(int j = i+1; j < N; ++j) {
            int diff = A.at(i) - A.at(j);
            if(diff % 200 == 0) { ++num; }
        }
    }

    cout << num << endl;

    return 0;
}
