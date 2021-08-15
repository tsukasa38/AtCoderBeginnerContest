#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);

    for(int i = 0; i < N; ++i) {
        cin >> A.at(i);
    }

    vector<pair<int, int>> attendance(N);

    for(int i = 0; i < N; ++i) {
        attendance.at(i) = pair<int, int>(A.at(i), i+1);
    }

    sort(attendance.begin(), attendance.end());

    for(int i = 0; i < N; ++i) {
        int number = attendance.at(i).second;
        cout << number << " ";
    }

    cout << endl;

    return 0;
}
