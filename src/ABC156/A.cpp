#include <iostream>
using namespace std;

int main() {
    int N, R;
    cin >> N >> R;

    cout << ((N < 10) ? (R + 100*(10-N)) : R) << endl;

    return 0;
}
