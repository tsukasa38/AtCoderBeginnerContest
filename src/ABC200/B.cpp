#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    long num = N;

    for(int i = 0; i < K; ++i) {
        if(num % 200 == 0) { num /= 200; }
        else { num = stol(to_string(num) + "200"); }
    }

    cout << num << endl;

    return 0;
}
