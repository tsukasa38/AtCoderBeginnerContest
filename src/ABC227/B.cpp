#include <set>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> S(N);
    for(int i = 0; i < N; ++i) { cin >> S.at(i); }

    set<int> s;

    for(int a = 1; a <= 150; ++a) {
        for(int b = 1; b <= 150; ++b) {
            int area = 4*a*b + 3*a + 3*b;
            s.insert(area);
        }
    }

    int num = 0;

    for(int i = 0; i < N; ++i) {
        for(int area: s) {
            if(S.at(i) == area) { ++num; break; }
        }
    }

    cout << (N - num) << endl;

    return 0;
}
