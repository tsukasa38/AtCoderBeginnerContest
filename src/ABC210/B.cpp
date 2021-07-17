#include <iostream>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    string loser;
    int len = S.size();

    for(int i = 0; i < len; ++i) {
        if(i % 2 == 0 && S.at(i) == '1') { loser = "Takahashi"; break; }
        if(i % 2 == 1 && S.at(i) == '1') { loser = "Aoki"; break; }
    }

    cout << loser << endl;

    return 0;
}
