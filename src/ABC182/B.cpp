#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);

    for(int i = 0; i < N; ++i) {
        cin >> A.at(i);
    }

    int max_num = -1;

    for(int i = 0; i < N; ++i) {
        max_num = max(max_num, A.at(i));
    }

    int max_gcd = -1;
    int max_count = -1;

    for(int i = 2; i <= max_num; ++i) {
        int count = 0;

        for(int j = 0; j < N; ++j) {
            if(A.at(j) % i == 0) { ++count; }
        }

        if(count >= max_count) {
            max_count = count;
            max_gcd = i;
        }
    }

    cout << max_gcd << endl;

    return 0;
}
