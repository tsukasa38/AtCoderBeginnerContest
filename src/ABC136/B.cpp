#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 0;

    for(int x = 1; x <= N; ++x) {
        int num = to_string(x).size();
        if((num % 2) == 1) { ++count; }
    }

    cout << count << endl;

    return 0;
}
