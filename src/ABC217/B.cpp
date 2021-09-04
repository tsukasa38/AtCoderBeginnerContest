#include <map>
#include <iostream>
using namespace std;

int main() {
    string S1, S2, S3;
    cin >> S1 >> S2 >> S3;

    map<string, bool> contest;

    contest["ABC"] = false;
    contest["ARC"] = false;
    contest["AGC"] = false;
    contest["AHC"] = false;

    contest.at(S1) = true;
    contest.at(S2) = true;
    contest.at(S3) = true;

    for(const auto &[key, value] : contest) {
        if(!value) { cout << key << endl; }
    }

    return 0;
}
