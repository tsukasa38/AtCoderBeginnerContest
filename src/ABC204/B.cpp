#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> trees(N);

    for(int i = 0; i < N; ++i) {
        cin >> trees.at(i);
    }

    int crop = 0;

    for(int i = 0; i < N; ++i) {
        int nuts = trees.at(i);
        if(nuts > 10) { crop += nuts - 10; }
    }

    cout << crop << endl;

    return 0;
}
