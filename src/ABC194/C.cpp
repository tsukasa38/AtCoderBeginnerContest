#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);

    for(int i = 0; i < N; ++i) {
        cin >> A.at(i);
    }

    vector<long long> cumulative_sum(N);
    vector<long long> cumulative_square_sum(N);

    long long sum1 = 0;
    long long sum2 = 0;

    for(int i = 0; i < N; ++i) {
        sum1 += A.at(i);
        sum2 += A.at(i)*A.at(i);
        cumulative_sum.at(i) = sum1;
        cumulative_square_sum.at(i) = sum2;
    }

    long long squared_error = 0;

    for(int i = 1; i < N; ++i) {
        squared_error += i * A.at(i) * A.at(i);
        squared_error += cumulative_square_sum.at(i-1);
        squared_error -= 2 * A.at(i) * cumulative_sum.at(i-1);
    }

    cout << squared_error << endl;

    return 0;
}
