#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);

    for(int i = 0; i < N; ++i) {
        cin >> A.at(i);
    }

    sort(A.begin(), A.end());

    bool is_ok = true;

    for(int i = 0; i < N; ++i) {
        if(A.at(i) != i+1) {
            is_ok = false;
            break;
        }
    }

    cout << (is_ok ? "Yes" : "No") << endl;

    return 0;
}
