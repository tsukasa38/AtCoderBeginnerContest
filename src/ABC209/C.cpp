#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> C(N);

    for(int i = 0; i < N; ++i) {
        cin >> C.at(i);
    }

    u_int64_t num = 1;
    sort(C.begin(), C.end());

    for(int i = 0; i < N; ++i) {
        if(C.at(i) - i > 0) { num = (num * (C.at(i) - i)) % 1000000007; }
        else { num = 0; break; }
    }

    cout << num << endl;

    return 0;
}
