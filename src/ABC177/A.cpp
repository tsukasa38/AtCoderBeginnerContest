#include <iostream>
using namespace std;

int main() {
    int D, T, S;
    cin >> D >> T >> S;

    cout << ((S*T >= D) ? "Yes" : "No") << endl;

    return 0;
}
