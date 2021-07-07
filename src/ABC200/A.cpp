#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int century = (N / 100) + (N % 100 == 0 ? 0 : 1);

    cout << century << endl;

    return 0;
}
