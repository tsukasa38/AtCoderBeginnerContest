#include <tuple>
#include <vector>
#include <iostream>
using namespace std;

void str_swap(string &str, int i, int j) {
    int tmp = str.at(i);
    str.at(i) = str.at(j);
    str.at(j) = tmp;
    return;
}

void str_n_swap(string &str) {
    int n = str.size() / 2;

    for(int i = 0; i < n; ++i) {
        str_swap(str, i, n+i);
    }

    return;
}

int main() {
    int N, Q;
    string S;

    cin >> N >> S >> Q;

    vector<tuple<int, int, int>> queries(Q);

    for(int i = 0; i < Q; ++i) {
        int t, a, b;
        cin >> t >> a >> b;
        queries.at(i) = make_tuple(t, a, b);
    }

    // TLE O(N*N)
    for(int i = 0; i < Q; ++i) {
        int t, a, b;
        tie(t, a, b) = queries.at(i);

        if(t == 1) { str_swap(S, a-1, b-1); }
        if(t == 2) { str_n_swap(S); }
    }

    cout << S << endl;

    return 0;
}
