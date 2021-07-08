#include <tuple>
#include <vector>
#include <iostream>
using namespace std;

void str_swap(string &str, int &i, int &j) {
    int tmp = str.at(i);
    str.at(i) = str.at(j);
    str.at(j) = tmp;
    return;
}

void str_n_swap(string &str) {
    int n = str.size() / 2;

    for(int i = 0; i < n; ++i) {
        int index1 = i;
        int index2 = n+i;
        str_swap(str, index1, index2);
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

    bool is_n_chars_swap = false;

    for(int i = 0; i < Q; ++i) {
        int t, a, b;
        tie(t, a, b) = queries.at(i);

        if(t == 1 && !is_n_chars_swap) {
            int index1 = a-1;
            int index2 = b-1;
            str_swap(S, index1, index2);
        }
        if(t == 1 && is_n_chars_swap) {
            int index1 = (a-1 < N ? a+N-1 : a-N-1);
            int index2 = (b-1 < N ? b+N-1 : b-N-1);
            str_swap(S, index1, index2);
        }
        if(t == 2) {
            is_n_chars_swap = !is_n_chars_swap;
        }
    }

    if(is_n_chars_swap) { str_n_swap(S); }

    /*
    // TLE O(N*N)
    for(int i = 0; i < Q; ++i) {
        int t, a, b;
        tie(t, a, b) = queries.at(i);

        if(t == 1) { str_swap(S, a-1, b-1); }
        if(t == 2) { str_n_swap(S); }
    }
    */

    cout << S << endl;

    return 0;
}
