#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int,int>> A(N);
    vector<pair<int, int>> B(N);

    for(int i = 0; i < N; ++i) {
        int a, b;
        cin >> a >> b;
        A.at(i) = make_pair(a, i);
        B.at(i) = make_pair(b, i);
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int min_time = 0;

    if(A.at(0).second == B.at(0).second) {
        int time1 = max(A.at(0).first, B.at(1).first);
        int time2 = max(A.at(1).first, B.at(0).first);
        int time3 = A.at(0).first + B.at(0).first;
        min_time = min(min(time1, time2), time3);
    }

    if(A.at(0).second != B.at(0).second) {
        min_time = max(A.at(0).first, B.at(0).first);
    }

    cout << min_time << endl;

    return 0;
}
