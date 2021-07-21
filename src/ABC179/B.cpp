#include <vector>
#include <iostream>
using namespace std;

bool is_doubles(pair<int, int> &p) {
    return (p.first == p.second);
}

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> D(N);

    for(int i = 0; i < N; ++i) {
        int d1, d2;
        cin >> d1 >> d2;
        D.at(i) = pair<int, int>(d1, d2);
    }

    bool is_ok = false;

    for(int i = 0; i < N-2; ++i) {
        bool b1 = is_doubles(D.at(i));
        bool b2 = is_doubles(D.at(i+1));
        bool b3 = is_doubles(D.at(i+2));

        if(b1 && b2 && b3) { is_ok = true; }
    }

    cout << (is_ok ? "Yes" : "No") << endl;

    return 0;
}
