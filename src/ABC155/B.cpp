#include <vector>
#include <iostream>
using namespace std;

bool is_approve(vector<int> &A) {
    int N = A.size();

    for(int i = 0; i < N; ++i) {
        int num = A.at(i);
        bool b2 = ((num % 2) == 0);
        bool b3 = ((num % 3) == 0);
        bool b5 = ((num % 5) == 0);

        if(b2 && !(b3 || b5)) { return false; }
    }

    return true;
}

int main() {
    int N;
    cin >> N;

    vector<int> A(N);

    for(int i = 0; i < N; ++i) {
        cin >> A.at(i);
    }

    bool ans = is_approve(A);

    cout << (ans ? "APPROVED" : "DENIED") << endl;

    return 0;
}
