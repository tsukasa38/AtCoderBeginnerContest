#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> W(N);

    for(int i = 0; i < N; ++i) {
        cin >> W.at(i);
    }

    int sum = 0;

    for(int i = 0; i < N; ++i) {
        sum += W.at(i);
    }

    int S1 = 0;
    int S2 = sum;
    int min_num = 10000;

    for(int i = 0; i < N; ++i) {
        S1 += W.at(i);
        S2 -= W.at(i);
        int num = abs(S1 - S2);

        if(num < min_num) { min_num = num; }
    }

    cout << min_num << endl;

    return 0;
}
