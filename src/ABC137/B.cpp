#include <iostream>
using namespace std;

int main() {
    int K, X;
    cin >> K >> X;

    int left = max(-1000000, (X - (K-1)));
    int right = min(1000000, (X + (K-1)));

    for(int x = left; x <= right; ++x) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}
