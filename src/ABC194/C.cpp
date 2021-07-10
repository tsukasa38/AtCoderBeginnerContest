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

    int sum = 0;

    for(int i = 0; i < N; ++i) {
        sum += A.at(i);
    }

    int squared_error = 0;

    for(int i = 0; i < N; ++i) {
        squared_error += (N-1)*A.at(i)*A.at(i);
        squared_error -= A.at(i)*(sum - A.at(i));
    }

    cout << squared_error << endl;

    return 0;
}
