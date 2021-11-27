#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, W;
    cin >> N >> W;

    vector<vector<long long>> cheese(N, vector<long long>(2));
    for(int i = 0; i < N; ++i) { cin >> cheese.at(i).at(0) >> cheese.at(i).at(1); }

    sort(cheese.begin(), cheese.end());
    reverse(cheese.begin(), cheese.end());

    long long rest = W;
    long long deliciousness = 0;

    for(int i = 0; i < N; ++i) {
        if(rest < cheese.at(i).at(1)) {
            deliciousness += cheese.at(i).at(0) * rest;
            break;
        }
        deliciousness += cheese.at(i).at(0) * cheese.at(i).at(1);
        rest -= cheese.at(i).at(1);
    }

    cout << deliciousness << endl;

    return 0;
}
