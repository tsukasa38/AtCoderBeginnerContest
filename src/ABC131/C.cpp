#include <iostream>
using namespace std;

long long GCD(long long x, long long y) {
    if(x % y == 0) { return y; }
    else { return GCD(y, x % y); }
}

long long LCM(long long x, long long y) {
    long long gcd = GCD(x, y);
    return (x * y) / gcd;
}

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    long long lcm = LCM(C, D);
    long long num = B - A + 1;
    long long C_mul = (B / C) - ((A-1) / C);
    long long D_mul = (B / D) - ((A-1) / D);
    long long CD_mul = (B / lcm) - ((A-1) / lcm);

    cout << (num - C_mul - D_mul + CD_mul) << endl;

    return 0;
}
