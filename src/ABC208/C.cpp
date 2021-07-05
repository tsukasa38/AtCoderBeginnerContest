#include <tuple>
#include <iostream>
#include <algorithm>
using namespace std;

bool id_compare(tuple<int, int, long> &t1, tuple<int, int, long> &t2) {
    return get<1>(t1) < get<1>(t2);
}

int main() {
    int N;
    long K;
    cin >> N >> K;

    vector<tuple<int, int, long>> a(N);

    for(int i = 0; i < N; ++i) {
        int id;
        cin >> id;
        a.at(i) = make_tuple(i, id, 0);
    }

    sort(a.begin(), a.end(), id_compare);

    int remain_snack_num = K % N;
    long distribute_snack_num = K / N;

    for(int i = 0; i < N; ++i) {
        get<2>(a.at(i)) += distribute_snack_num;
    }

    for(int i = 0; i < remain_snack_num; ++i) {
        get<2>(a.at(i)) += 1;
    }

    sort(a.begin(), a.end());

    for(int i = 0; i < N; ++i) {
        long snack_num = get<2>(a.at(i));
        cout << snack_num << endl;
    }

    return 0;
}
