#include <map>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> S(N);

    for(int i = 0; i < N; ++i) {
        cin >> S.at(i);
    }

    map<string, int> vote;

    for(int i = 0; i < N; ++i) {
        string candidate = S.at(i);

        if(!vote.count(candidate)) { vote[candidate] = 1; }
        else { vote.at(candidate) += 1; }
    }

    int max_count = 0;

    for(const auto item: vote) {
        int count = item.second;
        max_count = max(max_count, count);
    }

    for(const auto item: vote) {
        int count = item.second;

        if(count == max_count) {
            string candidate = item.first;
            cout << candidate << endl;
        }
    }

    return 0;
}
