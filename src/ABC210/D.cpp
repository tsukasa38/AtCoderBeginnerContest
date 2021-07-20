#include <tuple>
#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long H, W, C;
    cin >> H >> W >> C;

    vector<vector<long>> A(H, vector<long>(W));

    for(int i = 0; i < H; ++i) {
        for(int j = 0; j < W; ++j) {
            cin >> A.at(i).at(j);
        }
    }

    long min_cost = LONG_MAX;
    vector<tuple<long, long, long>> table;

    for(int i = 0; i < H; ++i) {
        for(int j = 0; j < W; ++j) {
            long cost = A.at(i).at(j);
            table.push_back(tuple<long, long, long>(cost, i, j));
        }
    }

    sort(table.begin(), table.end());

    for(int i = 0; i < H*W; ++i) {
        long i1 = get<1>(table.at(i));
        long j1 = get<2>(table.at(i));
        long cost1 = get<0>(table.at(i));

        if(min_cost < cost1 + C) { break; }

        for(int j = i+1; j < H*W; ++j) {
            long i2 = get<1>(table.at(j));
            long j2 = get<2>(table.at(j));
            long cost2 = get<0>(table.at(j));
            long distance = abs(i1 - i2) + abs(j1 -j2);

            long cost = cost1 + cost2 + C*distance;
            if(min_cost > cost) { min_cost = cost; }
        }
    }

    cout << min_cost << endl;

    return 0;
}
