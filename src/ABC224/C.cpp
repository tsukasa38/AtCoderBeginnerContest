#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> P(N);
    for(int i = 0; i < N; ++i) {
        int X, Y;
        cin >> X >> Y;
        P.at(i) = pair<int, int>(X, Y);
    }

    int num = 0;

    for(int i = 0; i < N; ++i) {
        for(int j = i + 1; j < N; ++j) {
            for(int k = j + 1; k < N; ++k) {
                long long vec1x = P.at(j).first - P.at(i).first;
                long long vec1y = P.at(j).second - P.at(i).second;
                long long vec2x = P.at(k).first - P.at(i).first;
                long long vec2y = P.at(k).second - P.at(i).second;
                if(vec1x*vec2y - vec1y*vec2x != 0) { ++num; }
            }
        }
    }

    cout << num << endl;

    return 0;
}
