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

    int num = 0;

    for(int i = 0; i < N; ++i) {
        for(int j = i+1; j < N; ++j) {
            if(A.at(i) != A.at(j)) { ++num; }
        }
    }

    cout << num << endl;

    return 0;
}
