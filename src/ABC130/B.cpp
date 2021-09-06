#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> L(N);

    for(int i = 0; i < N; ++i) {
        cin >> L.at(i);
    }

    vector<int> D(N+1, 0);

    for(int i = 1; i <= N; ++i) {
        D.at(i) = D.at(i-1) + L.at(i-1);
    }

    int count = 0;

    for(int i = 0; i <= N; ++i) {
        if(D.at(i) <= X) { ++count; }
    }

    cout << count << endl;

    return 0;
}
