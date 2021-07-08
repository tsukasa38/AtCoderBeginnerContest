#include <vector>
#include <climits>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> B(N);

    for(int i = 0; i < N; ++i) { cin >> A.at(i); }
    for(int i = 0; i < N; ++i) { cin >> B.at(i); }

    int min_num = INT_MIN;
    int max_num = INT_MAX;

    for(int i = 0; i < N; ++i) {
        int a = A.at(i);
        int b = B.at(i);

        if(min_num < a) { min_num = a; }
        if(max_num > b) { max_num = b; }
    }

    int count = max_num - min_num + 1;
    cout << ((count > 0) ? count : 0) << endl;

    return 0;
}
