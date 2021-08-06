#include <vector>
#include <iostream>
using namespace std;

const int MAX = 1200001;

int main() {
    int N, M, X;
    cin >> N >> M >> X;

    vector<int> book(N);
    vector<vector<int>> comprehension(N, vector<int>(M));

    for(int i = 0; i < N; ++i) {
        cin >> book.at(i);

        for(int j = 0; j < M; ++j) {
            cin >> comprehension.at(i).at(j);
        }
    }

    int min_amount = MAX;

    for(int bit = 0; bit < (1 << N); ++bit) {
        int amount = 0;
        bool is_ok = true;
        vector<int> total_comprehension(M, 0);

        for(int i = 0; i < N; ++i) {
            if(bit & (1 << i)) {
                amount += book.at(i);

                for(int j = 0; j < M; ++j) {
                    total_comprehension.at(j) += comprehension.at(i).at(j);
                }
            }
        }

        for(int i = 0; i < M; ++i) {
            if(total_comprehension.at(i) < X) { is_ok = false; }
        }

        if(is_ok && (amount < min_amount)) { min_amount = amount; }
    }

    if(min_amount == MAX) { min_amount = -1; }

    cout << min_amount << endl;

    return 0;
}
