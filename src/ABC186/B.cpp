#include <vector>
#include <iostream>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<int>> table(H, vector<int>(W));

    for(int i = 0; i < H; ++i) {
        for(int j = 0; j < W; ++j) {
            cin >> table.at(i).at(j);
        }
    }

    int min_num = 100;

    for(int i = 0; i < H; ++i) {
        for(int j = 0; j < W; ++j) {
            min_num = min(min_num, table.at(i).at(j));
        }
    }

    int num = 0;

    for(int i = 0; i < H; ++i) {
        for(int j = 0; j < W; ++j) {
            num += table.at(i).at(j) - min_num;
        }
    }

    cout << num << endl;

    return 0;
}
