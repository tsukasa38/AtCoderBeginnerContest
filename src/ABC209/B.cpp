#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> A(N);

    for(int i = 0; i < N; ++i) {
        cin >> A.at(i);
    }

    int price = 0;

    for(int i = 0; i < N; ++i) {
        int index = i + 1;
        if(index % 2 == 0) { price += A.at(i) - 1; }
        else { price += A.at(i); }
    }

    cout << ((price <= X) ? "Yes" : "No") << endl;

    return 0;
}
