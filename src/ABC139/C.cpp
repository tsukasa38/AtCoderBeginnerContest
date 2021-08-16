#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> H(N);

    for(int i = 0; i < N; ++i) {
        cin >> H.at(i);
    }

    int num = 0;
    int max_num = 0;

    for(int i = 0; i < (N-1); ++i) {
        if(H.at(i) >= H.at(i+1)) { num += 1; }
        else { max_num = max(num, max_num); num = 0; }
    }

    max_num = max(num, max_num);

    cout << max_num << endl;

    return 0;
}
