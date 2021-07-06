#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> A(N);

    for(int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        A.at(i) = make_pair(num, i);
    }

    sort(A.begin(), A.end());

    map<int, vector<int>> B;

    for(const pair<int, int> &a: A) {
        int num = a.first;
        int index = a.second;

        if(!B.count(num)) { B[num] = { index }; }
        else { B.at(num).push_back(index); }
    }

    long count = 0;

    for(const auto &b: B) {
        int len = b.second.size();

        for(int i = 0; i < len; ++i) {
            int index = b.second.at(i);
            count += (N-index) - (len-i);
        }
    }

    cout << count << endl;

    return 0;
}
