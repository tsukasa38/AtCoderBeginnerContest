#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 0;
    int M = sqrt(N);

    for(int a = 1; a < N; ++a) {
        for(int b = 1; b <= M; ++b) {
            if(a * b < N) {
                int c = N - a * b;
                if(a > M) { count += 2; }
                else { count += 1; }
            }
        }
    }

    cout << count << endl;

    return 0;
}
