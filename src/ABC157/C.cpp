#include <vector>
#include <iostream>
using namespace std;

int solve(vector<pair<int, int>> &condition, int N, int M) {
    for(int x = 0; x < 1000; ++x) {
        string num = to_string(x);
        int len = num.size();

        if(len != N) { continue; }

        bool is_exist = true;

        for(int j = 0; j < M; ++j) {
            int s = condition.at(j).first;
            int c = condition.at(j).second;

            if(num.at(s-1) != (c + '0')) { is_exist = false; }
        }

        if(is_exist) { return x; }
    }

    return -1;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<pair<int, int>> condition(M);

    for(int i = 0; i < M; ++i) {
        int s, c;
        cin >> s >> c;
        condition.at(i) = pair<int, int>(s, c);
    }

    int ans = solve(condition, N, M);

    cout << ans << endl;

    return 0;
}
