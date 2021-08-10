#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(M);

    for(int i = 0; i < M; ++i) {
        cin >> A.at(i);
    }

    int day = 0;

    for(int i = 0; i < M; ++i) {
        day += A.at(i);
    }

    cout << ((N < day) ? -1 : (N - day)) << endl;

    return 0;
}
