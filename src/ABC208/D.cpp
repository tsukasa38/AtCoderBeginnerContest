#include <tuple>
#include <vector>
#include <climits>
#include <iostream>
using namespace std;

long total_duration(vector<tuple<int, int, int>> &roads, int &N, int &M) {

    vector<vector<long>> duration_table(N, vector<long>(N, LONG_MAX));

    for(int i = 0; i < M; ++i) {
        int start, end, duration;
        tie(start, end, duration) = roads.at(i);
        duration_table.at(start-1).at(end-1) = duration;
    }

    long duration = 0;

    for(int s = 0; s < N; ++s) {
        for(int t = 0; t < N; ++t) {
            for(int k = 0; k < N; ++k) {
                if(duration_table.at(s).at(t) > duration_table.at(s).at(k) + duration_table.at(k).at(t)) {
                    duration_table.at(s).at(t) = duration_table.at(s).at(k) + duration_table.at(k).at(t);
                }
                if(duration_table.at(s).at(t) != LONG_MAX) { duration += duration_table.at(s).at(t); }
            }
        }
    }

    return duration;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<tuple<int, int, int>> roads(M);

    for(int i = 0; i < M; ++i) {
        int start, end, duration;
        cin >> start >> end >> duration;
        roads.at(i) = make_tuple(start, end, duration);
    }

    long answer = total_duration(roads, N, M);

    cout << answer << endl;

    return 0;
}
