#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> p(N);

    for(int i = 0; i < N; ++i) {
        cin >> p.at(i);
    }

    int count = 0;

    for(int i = 0; i < N; ++i) {
        if(p.at(i) != (i+1)) { ++count; }
    }

    cout << ((count == 0 || count == 2) ? "YES" : "NO") << endl;

    return 0;
}
