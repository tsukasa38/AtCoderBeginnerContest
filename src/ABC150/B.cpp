#include <iostream>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    int count = 0;

    for(int i = 0; i < (N-2); ++i) {
        if(S.substr(i, 3) == "ABC") { ++count; }
    }

    cout << count << endl;

    return 0;
}
