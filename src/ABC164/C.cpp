#include <set>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> S(N);

    for(int i = 0; i < N; ++i) {
        cin >> S.at(i);
    }

    set<string> prize;

    for(int i = 0; i < N; ++i) {
        prize.insert(S.at(i));
    }

    int num = prize.size();

    cout << num << endl;

    return 0;
}
