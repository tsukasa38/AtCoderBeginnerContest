#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> P(N);

    for(int i = 0; i < N; ++i) {
        cin >> P.at(i);
    }

    int count = 0;
    int min_num = P.at(0);

    for(int i = 0; i < N; ++i) {
        min_num = min(min_num, P.at(i));

        if(min_num == P.at(i)) { ++count; }
    }

    cout << count << endl;

    return 0;
}
