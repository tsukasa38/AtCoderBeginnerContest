#include <map>
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

    map<string, int> judge;

    judge["AC"] = 0;
    judge["WA"] = 0;
    judge["RE"] = 0;
    judge["TLE"] = 0;

    for(int i = 0; i < N; ++i) {
        string str = S.at(i);
        judge.at(str) += 1;
    }

    cout << "AC x " << judge.at("AC") << endl;
    cout << "WA x " << judge.at("WA") << endl;
    cout << "TLE x " << judge.at("TLE") << endl;
    cout << "RE x " << judge.at("RE") << endl;

    return 0;
}
