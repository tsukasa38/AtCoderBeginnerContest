#include <map>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<pair<int, string>> results(M);

    for(int i = 0; i < M; ++i) {
        int p;
        string S;
        cin >> p >> S;
        results.at(i) = pair<int, string>(p, S);
    }

    map<int, vector<string>> results2;

    for(int i = 0; i < M; ++i) {
        int p = results.at(i).first;
        string S = results.at(i).second;

        if(!results2.count(p)) { results2[p] = { S }; }
        else { results2.at(p).push_back(S); }
    }

    int correct = 0;
    int penalty = 0;

    for(const auto item: results2) {
        int len = item.second.size();
        int WA = 0;

        for(int i = 0; i < len; ++i) {
            string result = item.second.at(i);
            if(result == "AC") { ++correct; penalty += WA; break; }
            if(result == "WA") { ++WA; }
        }
    }

    cout << correct << " " << penalty << endl;

    return 0;
}
