#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string toBinary(int x, int len) {
    string switches = "";

    for(int i = 0; i < len; ++i) {
        if(x & (1 << i)) { switches += '1'; }
        else { switches += '0'; }
    }

    reverse(switches.begin(), switches.end());

    return switches;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> bulb(M);

    for(int i = 0; i < M; ++i) {
        int k;
        cin >> k;

        for(int j = 0; j < k; ++j) {
            int s;
            cin >> s;
            bulb.at(i).push_back(s);
        }
    }

    vector<int> p(M);

    for(int i = 0; i < M; ++i) {
        cin >> p.at(i);
    }

    int combo = 0;

    for(int bit = 0; bit < (1 << N); ++bit) {
        bool is_ok = true;
        string switches = toBinary(bit, N);

        for(int i = 0; i < M; ++i) {
            int count = 0;
            int k = bulb.at(i).size();

            for(int j = 0; j < k; ++j) {
                int index = bulb.at(i).at(j) - 1;
                char is_switch_on = switches.at(index);

                if(is_switch_on == '1') { ++count; }
            }

            if(count % 2 != p.at(i)) { is_ok = false; }
        }

        if(is_ok) { ++combo; }
    }

    cout << combo << endl;

    return 0;
}
