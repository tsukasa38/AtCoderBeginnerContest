#include <iostream>
using namespace std;

int main() {
    int H, A;
    cin >> H >> A;

    cout << (((H % A) == 0) ? (H / A) : ((H / A) + 1)) << endl;

    return 0;
}
