#include <math.h>
#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    int k = 0;

    for(int i = 0; i < 60; ++i) {
        long long num = pow(2, i);

        if(num <= N) { k = i; }
    }

    cout << k << endl;

    return 0;
}
