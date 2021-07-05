#include <tuple>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int continuous_segment_num(vector<tuple<int, int, int>> &segments, int &N) {
    int num = 0;

    for(int i = 0; i < N; ++i) {
        int type1, left1, right1;
        tie(type1, left1, right1) = segments.at(i);

        for(int j = i+1; j < N; ++j) {
            int type2, left2, right2;
            tie(type2, left2, right2) = segments.at(j);

            if(left2 < right1) { ++num; }
            else if(left2 == right1 && (type1 == 1 || type1 == 3) && (type2 == 1 || type2 == 2)) { ++num; }
        }
    }

    return num;
}

bool compare(tuple<int, int, int> &t1, tuple<int, int, int> &t2) {
    if(get<1>(t1) != get<1>(t2)) { return get<1>(t1) < get<1>(t2); }
    if(get<2>(t1) != get<2>(t2)) { return get<2>(t1) < get<2>(t2); }
    return get<0>(t1) < get<0>(t2);
}

int main() {
    int N;
    cin >> N;

    vector<tuple<int, int, int>> segments(N);

    for(int i = 0; i < N; ++i) {
        int type, left, right;
        cin >> type >> left >> right;
        segments.at(i) = make_tuple(type, left, right);
    }

    sort(segments.begin(), segments.end(), compare);

    int num = continuous_segment_num(segments, N);

    cout << num << endl;

    return 0;
}
