#include <cmath>
#include <vector>
#include <iomanip>
#include <iostream>
#include <algorithm>
using namespace std;

double distance(pair<int, int> &p1, pair<int, int> &p2) {
    int x1 = p1.first;
    int x2 = p2.first;
    int y1 = p1.second;
    int y2 = p2.second;
    int diff_x = x1 - x2;
    int diff_y = y1 - y2;

    return sqrt(diff_x*diff_x + diff_y*diff_y);
}

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> point(N);

    for(int i = 0; i < N; ++i) {
        int x, y;
        cin >> x >> y;
        point.at(i) = pair<int, int>(x, y);
    }

    vector<int> town(N);

    for(int i = 0; i < N; ++i) {
        town.at(i) = i;
    }

    int count = 0;
    double sum = 0;

    do {
        ++count;

        for(int i = 0; i < (N-1); ++i) {
            int s = town.at(i);
            int g = town.at(i+1);
            sum += distance(point.at(s), point.at(g));
        }

    } while(next_permutation(town.begin(), town.end()));

    double ave = sum / count;

    cout << fixed << setprecision(10) << ave << endl;

    return 0;
}
