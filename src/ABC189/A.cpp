#include <iostream>
using namespace std;

int main() {
    char C1, C2, C3;
    cin >> C1 >> C2 >> C3;

    cout << ((C1 == C2 && C2 == C3) ? "Won" : "Lost") << endl;

    return 0;
}
