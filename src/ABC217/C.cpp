#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> p(N);

    for(int i = 0; i < N; ++i) {
        cin >> p.at(i);
    }

    vector<pair<int, int>> pairs(N);

    for(int i = 0; i < N; ++i) {
        pairs.at(i) = pair<int, int>(p.at(i), i+1);
    }

    sort(pairs.begin(), pairs.end());

    for(int i = 0; i < N; ++i) {
        cout << pairs.at(i).second << " ";
    }

    cout << endl;

    return 0;
}
