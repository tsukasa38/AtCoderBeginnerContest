#include <vector>
#include <iostream>
using namespace std;

int main() {
    long long N, A, B, P, Q, R, S;
    cin >> N >> A >> B >> P >> Q >> R >> S;

    int H = Q - P + 1;
    int W = S - R + 1; 

    vector<vector<char>> table(H, vector<char>(W, '.'));

    long long kmin1 = max(1 - A, 1 - B);
    long long kmax1 = min(N - A, N - B);

    for(int i = 0; i < H; ++i) {
        for(int j = 0; j < W; ++j) {
            long long h = P + i;
            long long w = R + j;
            long long k1 = h - A;
            long long k2 = w - B;

            if(k1 == k2 && (kmin1 <= k1 && k1 <= kmax1)) { table.at(i).at(j) = '#'; }
        }
    }

    long long kmin2 = max(1 - A, B - N);
    long long kmax2 = min(N - A, B - 1);

    for(int i = 0; i < H; ++i) {
        for(int j = 0; j < W; ++j) {
            long long h = P + i;
            long long w = R + j;
            long long k1 = h - A;
            long long k2 = B - w;

            if(k1 == k2 && (kmin2 <= k1 && k1 <= kmax2)) { table.at(i).at(j) = '#'; }
        }
    }

    for(int i = 0; i < H; ++i) {
        for(int j = 0; j < W; ++j) {
            cout << table.at(i).at(j);
        }
        cout << endl;
    }

    return 0;
}
