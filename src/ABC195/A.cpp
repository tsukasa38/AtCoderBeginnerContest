#include <iostream>
using namespace std;

int main() {
    int M, H;
    cin >> M >> H;

    cout << (H % M == 0 ? "Yes" : "No") << endl;

    return 0;
}
