#include <vector>
#include <iostream>
using namespace std;

bool is_line_exist(pair<int, int> &a, pair<int, int> &b, pair<int, int> &c) {
    pair<int, int> ab(b.first - a.first, b.second - a.second);
    pair<int, int> ac(c.first - a.first, c.second - a.second);
    return (ab.first * ac.second == ab.second * ac.first);
}

bool solve(vector<pair<int, int>> &points, int &N) {
    for(int i = 0; i < N; ++i) {
        for(int j = i+1; j < N; ++j) {
            for(int k = j+1; k < N; ++k) {
                if(is_line_exist(points.at(i), points.at(j), points.at(k))) { return true; }
            }
        }
    }

    return false;
}

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> points(N);

    for(int i = 0; i < N; ++i) {
        int x, y;
        cin >> x >> y;
        points.at(i) = pair<int, int>(x, y);
    }

    bool is_ok = solve(points, N);

    cout << (is_ok ? "Yes" : "No") << endl;

    return 0;
}
