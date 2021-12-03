#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if(N >= 42) { ++N; }

    if(N < 10) { cout << "AGC00" + to_string(N) << endl; }
    else { cout << "AGC0" + to_string(N) << endl; }

    return 0;
}
