#include <iostream>
using namespace std;

int S(int x) {
    int a = (x / 1) % 10;
    int b = (x / 10) % 10;
    int c = (x / 100) % 10;
    return a + b + c;
}

int main() {
    int A, B;
    cin >> A >> B;

    cout << ((S(A) < S(B)) ? S(B) : S(A)) <<endl;

    return 0;
}
