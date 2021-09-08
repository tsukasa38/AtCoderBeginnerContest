#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> H(N);

    for(int i = 0; i < N; ++i) {
        cin >> H.at(i);
    }

    int count = 0;
    int max_height = 0;

    for(int i = 0; i < N; ++i) {
        max_height = max(max_height, H.at(i));
        if(H.at(i) == max_height) { ++count; }
    }

    cout << count << endl;

    return 0;
}
