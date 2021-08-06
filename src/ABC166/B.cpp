#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> sunuke(N, 0);

    for(int i = 0; i < K; ++i) {
        int d;
        cin >> d;

        for(int i = 0; i < d; ++i) {
            int x;
            cin >> x;
            sunuke.at(x-1) += 1;
        }

    }

    int num = 0;

    for(int i = 0; i < N; ++i) {
        if(sunuke.at(i) == 0) { num += 1; }
    }

    cout << num << endl;

    return 0;
}
