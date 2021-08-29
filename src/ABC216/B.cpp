#include <set>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<string, string>> name(N);

    for(int i = 0; i < N; ++i) {
        string S, T;
        cin >> S >> T;
        name.at(i) = pair<string, string>(S, T);
    }

    set<string> name_set;

    for(int i = 0; i < N; ++i) {
        string S = name.at(i).first;
        string T = name.at(i).second;
        name_set.insert(S + " " + T);
    }

    cout << ((name_set.size() < N) ? "Yes" : "No") << endl;

    return 0;
}
