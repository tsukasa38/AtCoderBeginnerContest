#include <vector>
#include <iostream>
using namespace std;

bool solve(vector<int> &H) {
    int N = H.size();

    if(N == 1) { return true; }

    for(int i = 0; i < (N-1); ++i) {
        int h1 = H.at(N-i-2);
        int h2 = H.at(N-i-1);

        if(h1-1 == h2) { H.at(N-i-2) += -1; }
        if(h1-1 >  h2) { return false; }
    }

    return true;
}

int main() {
    int N;
    cin >> N;

    vector<int> H(N);

    for(int i = 0; i < N; ++i) {
        cin >> H.at(i);
    }

    bool ans = solve(H);

    cout << (ans ? "Yes" : "No") << endl;

    return 0;
}
