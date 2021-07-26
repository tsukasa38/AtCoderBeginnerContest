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

    long long ans = 0;
    int height = A.at(0);

    for(int i = 0; i < N; ++i) {
        if(height > A.at(i)) { ans += height - A.at(i); }
        if(height < A.at(i)) { height = A.at(i); }
    }

    cout << ans << endl;

    return 0;
}
