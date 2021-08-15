#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> h(N);

    for(int i = 0; i < N; ++i) {
        cin >> h.at(i);
    }

    int count = 0;

    for(int i = 0; i < N; ++i) {
        if(h.at(i) >= K) { ++count; }
    }

    cout << count << endl;

    return 0;
}
