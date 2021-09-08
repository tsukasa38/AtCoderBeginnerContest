#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> V(N);
    vector<int> C(N);

    for(int i = 0; i < N; ++i) {
        cin >> V.at(i);
    }

    for(int i = 0; i < N; ++i) {
        cin >> C.at(i);
    }

    vector<bool> is_valuable_jewelry(N);

    for(int i = 0; i < N; ++i) {
        int v = V.at(i);
        int c = C.at(i);
        is_valuable_jewelry.at(i) = ((v / c != 0) ? true : false);
    }

    int X = 0;
    int Y = 0;

    for(int i = 0; i < N; ++i) {
        if(is_valuable_jewelry.at(i)) {
            int v = V.at(i);
            int c = C.at(i);
            X += v;
            Y += c;
        }
    }

    cout << X - Y << endl;

    return 0;
}
