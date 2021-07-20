#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> points(N);

    for(int i = 0; i < N; ++i) {
        int x, y;
        cin >> x >> y;
        points.at(i) = make_pair(x, y);
    }

    int count = 0;

    for(int i = 0; i < N; ++i) {
        for(int j = i+1; j < N; ++j) {
            int xi = points.at(i).first;
            int xj = points.at(j).first;
            int yi = points.at(i).second;
            int yj = points.at(j).second;
            double slope = (double)(yj - yi) / (xj - xi);
            if(-1 <= slope && slope <= 1) { ++count; }
        }
    }

    cout << count << endl;

    return 0;
}
