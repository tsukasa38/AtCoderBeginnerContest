#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<vector<int>> T(N, vector<int>(N));

    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            cin >> T.at(i).at(j);
        }
    }

    vector<int> city(N-1);

    for(int i = 0; i < N-1; ++i) {
        city.at(i) = i+1;
    }

    int count = 0;

    do {
        int city1 = 0;
        int city2 = 0;
        int64_t duration = 0;

        for(int i = 0; i < N-1; ++i) {
            city2 = city.at(i);
            duration += T.at(city1).at(city2);
            city1 = city2;
        }

        city2 = 0;
        duration += T.at(city1).at(city2);

        if(duration == K) { ++count; }

    } while(next_permutation(city.begin(), city.end()));

    cout << count << endl;

    return 0;
}
