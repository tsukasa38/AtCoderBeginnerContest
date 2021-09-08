#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    int N = S.size();

    int count1 = 0;
    int count2 = 0;

    for(int i = 0; i < N; ++i) {
        char c = S.at(i);

        if((i % 2 == 0) && (c != '0')) { ++count1; }
        if((i % 2 == 1) && (c != '1')) { ++count1; }

        if((i % 2 == 0) && (c != '1')) { ++count2; }
        if((i % 2 == 1) && (c != '0')) { ++count2; }
    }

    cout << min(count1, count2) << endl;

    return 0;
}
