#include <cmath>
#include <iostream>
using namespace std;

bool is_prime(int x) {
    int count = sqrt(x);

    for(int i = 2; i <= count; ++i) {
        if(x % i == 0) { return false; }
    }

    return true;
}

int main() {
    int X;
    cin >> X;

    int x = X;

    while(true) {
        if(is_prime(x)) { break; }
        ++x;
    }

    cout << x << endl;

    return 0;
}
