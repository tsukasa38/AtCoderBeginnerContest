#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N, P;
    cin >> N >> P;

    vector<int> a(N);

    for(int i = 0; i < N; ++i) {
        cin >> a.at(i);
    }

    int num = 0;

    for(int i = 0; i < N; ++i) {
        if(a.at(i) < P) { ++num; }
    }

    cout << num << endl;

    return 0;
}
