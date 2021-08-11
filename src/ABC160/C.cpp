#include <vector>
#include <iostream>
using namespace std;

int main() {
    int K, N;
    cin >> K >> N;

    vector<int> A(N);

    for(int i = 0; i < N; ++i) {
        cin >> A.at(i);
    }

    int sum_dist = 0;
    int max_dist = 0;

    for(int i = 0; i < N-1; ++i) {
        int house1 = A.at(i);
        int house2 = A.at(i+1);
        int dist = house2 - house1;
        sum_dist += dist;

        if(max_dist < dist) { max_dist = dist; }
    }

    int dist = K - A.at(N-1) + A.at(0);
    sum_dist += dist;

    if(max_dist < dist) { max_dist = dist; }

    int ans = sum_dist - max_dist;

    cout << ans << endl;

    return 0;
}
