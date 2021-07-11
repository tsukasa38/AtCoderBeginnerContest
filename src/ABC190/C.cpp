#include <set>
#include <vector>
#include <iostream>
using namespace std;

bool is_exist(set<int> &s, int e) {
    return (s.find(e) != s.end());
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<pair<int, int>> terms(M);

    for(int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        terms.at(i) = make_pair(a, b);
    }

    int K;
    cin >> K;

    vector<pair<int, int>> persons(K);

    for(int i = 0; i < K; ++i) {
        int c, d;
        cin >> c >> d;
        persons.at(i) = make_pair(c, d);
    }

    int max_count = 0;

    for(int bit = 0; bit < (1 << K); ++bit) {

        set<int> dishes;

        for(int i = 0; i < K; ++i) {
            int c = persons.at(i).first;
            int d = persons.at(i).second;

            if(bit & (1 << i)) { dishes.insert(d); }
            else { dishes.insert(c); }
        }

        int count = 0;

        for(int i = 0; i < M; ++i) {
            int a = terms.at(i).first;
            int b = terms.at(i).second;

            if(is_exist(dishes, a) && is_exist(dishes, b)) { ++count; }
        }

        if(max_count < count) { max_count = count; }
    }

    cout << max_count << endl;

    return 0;
}
