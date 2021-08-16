#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    for(int x = 0; x < 20; ++x) {
        int num = (A - 1) * x + 1;

        if(num >= B) {
            cout << x << endl;
            break;
        }
    }

    return 0;
}
