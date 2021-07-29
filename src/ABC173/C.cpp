#include <vector>
#include <iostream>
using namespace std;

int main() {
    int H, W, K;
    cin >> H >> W >> K;

    vector<vector<char>> c(H, vector<char>(W));

    for(int i = 0; i < H; ++i) {
        for(int j = 0; j < W; ++j) {
            cin >> c.at(i).at(j);
        }
    }

    vector<int> h(H);
    vector<int> w(W);

    for(int i = 0; i < H; ++i) {
        int count = 0;

        for(int j = 0; j < W; ++j) {
            if(c.at(i).at(j) == '#') { ++count; }
        }

        h.at(i) = count;
    }

    for(int i = 0; i < W; ++i) {
        int count = 0;

        for(int j = 0; j < H; ++j) {
            if(c.at(j).at(i) == '#') { ++count; }
        }

        w.at(i) = count;
    }

    int sum = 0;

    for(int i = 0; i < H; ++i) {
        for(int j = 0; j < W; ++j) {
            if(c.at(i).at(j) == '#') { ++sum; }
        }
    }

    int count = 0;

    for(int i = 0; i < (1 << H); ++i) {
        for(int j = 0; j < (1 << W); ++j) {
            int num = sum;

            for(int k = 0; k < H; ++k) {
                if(i & (1 << k)) { num -= h.at(k); }
            }

            for(int l = 0; l < W; ++l) {
                if(j & (1 << l)) { num -= w.at(l); }
            }

            for(int k = 0; k < H; ++k) {
                for(int l = 0; l < W; ++l) {
                    if((i & (1 << k)) && (j & (1 << l)) && c.at(k).at(l) == '#') { num += 1; }
                }
            }

            if(num == K) { ++count; }
        }
    }

    cout << count << endl;

    return 0;
}
