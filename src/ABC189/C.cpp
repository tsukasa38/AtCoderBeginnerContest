#include <vector>
#include <climits>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);

    for(int i = 0; i < N; ++i) {
        cin >> A.at(i);
    }

    int max_orange_num = 0;

    for(int l = 0; l < N; ++l) {
        int x = INT_MAX;

        for(int r = l; r < N; ++r) {
            int dishes_num = r - l + 1;
            if(x > A.at(r)) { x = A.at(r); }
            if(max_orange_num < dishes_num * x) { max_orange_num = dishes_num * x; }
        }
    }

    cout << max_orange_num << endl;

    return 0;
}
