#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int sum = 0;

    for(int i = 1; i <= N; ++i) {
        for(int j = 1; j <= K; ++j) {
            int room_num = 100*i + j;
            sum += room_num;
        }
    }

    cout << sum << endl;

    return 0;
}
