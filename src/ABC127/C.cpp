#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<pair<int, int>> gate(M);

    for(int i = 0; i < M; ++i) {
        int L, R;
        cin >> L >> R;
        gate.at(i) = pair<int, int>(L, R);
    }

    int max_L = 1;
    int min_R = N;

    for(int i = 0; i < M; ++i) {
        int L = gate.at(i).first;
        int R = gate.at(i).second;
        max_L = max(max_L, L);
        min_R = min(min_R, R);
    }

    int num = min_R - max_L + 1;

    cout << ((num > 0) ? num : 0) << endl;

    return 0;
}
