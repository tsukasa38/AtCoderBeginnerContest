#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N, S, D;
    cin >> N >> S >> D;

    vector<pair<int, int>> spells(N);

    for(int i = 0; i < N; ++i) {
        int duration, damage;
        cin >> duration >> damage;
        spells.at(i) = make_pair(duration, damage);
    }

    bool is_attack = false;

    for(int i = 0; i < N; ++i) {
        int duration = spells.at(i).first;
        int damage = spells.at(i).second;

        if(duration < S && damage > D) {
            is_attack = true;
            break;
        }
    }

    cout << (is_attack ? "Yes" : "No") << endl;

    return 0;
}
