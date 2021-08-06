#include <set>
#include <map>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> H(N);
    vector<pair<int, int>> R(M);

    for(int i = 0; i < N; ++i) {
        cin >> H.at(i);
    }

    for(int i = 0; i < M; ++i) {
        int A, B;
        cin >> A >> B;
        R.at(i) = pair<int, int>(A, B);
    }

    map<int, vector<int>> list;

    for(int i = 1; i <= N; ++i) {
        list[i] = {};
    }

    for(int i = 0; i < M; ++i) {
        int A = R.at(i).first;
        int B = R.at(i).second;
        list.at(A).push_back(B);
        list.at(B).push_back(A);
    }

    int num = 0;

    for(int i = 1; i <= N; ++i) {
        bool is_ok = true;

        for(int j: list.at(i)) {
            if(H.at(i-1) <= H.at(j-1)) { is_ok = false; }
        }

        if(is_ok) { num += 1; }
    }

    cout << num << endl;

    return 0;
}
