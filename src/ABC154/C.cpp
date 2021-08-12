#include <set>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);

    for(int i = 0; i < N; ++i) {
        cin >> A.at(i);
    }

    set<int> S;

    for(int i = 0; i < N; ++i) {
        S.insert(A.at(i));
    }

    cout << ((S.size() == N) ? "YES" : "NO") << endl;

    return 0;
}
