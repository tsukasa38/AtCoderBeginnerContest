#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> FizzBuzz(N);

    for(int i = 0; i < N; ++i) {
        int num = i+1;
        FizzBuzz.at(i) = (((num % 3 == 0) || (num % 5 == 0)) ? 0 : num);
    }

    long long sum = 0;

    for(int i  = 0; i < N; ++i) {
        sum += FizzBuzz.at(i);
    }

    cout << sum << endl;

    return 0;
}
