#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N, K, Q;
    cin >> N >> K >> Q;

    vector<int> A(Q);

    for(int i = 0; i < Q; ++i) {
        cin >> A.at(i);
    }

    vector<int> score(N, 0);

    for(int i = 0; i < Q; ++i) {
        int winner = A.at(i) - 1;
        score.at(winner) += 1;
    }

    for(int i = 0; i < N; ++i) {
        int win_num = score.at(i);
        int lose_num = Q - win_num;
        score.at(i) = K - lose_num;
    }

    for(int i = 0; i < N; ++i) {
        bool is_win = (score.at(i) > 0);
        cout << (is_win ? "Yes" : "No") << endl;
    }

    return 0;
}
