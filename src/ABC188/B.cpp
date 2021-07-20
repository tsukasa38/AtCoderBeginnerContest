#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> B(N);

    for(int i = 0; i < N; ++i) { cin >> A.at(i); }
    for(int i = 0; i < N; ++i) { cin >> B.at(i); }

    long inner_product = 0;

    for(int i = 0; i < N; ++i) {
        int a = A.at(i);
        int b = B.at(i);
        inner_product += a*b;
    }

    cout << ((inner_product == 0) ? "Yes" : "No") << endl;

    return 0;
}
