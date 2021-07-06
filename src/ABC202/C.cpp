#include <map>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> B(N);
    vector<int> C(N);

    for(int i = 0; i < N; ++i) { cin >> A.at(i); }
    for(int i = 0; i < N; ++i) { cin >> B.at(i); }
    for(int i = 0; i < N; ++i) { cin >> C.at(i); }

    map<int, int> counts;

    for(int i = 0; i < N; ++i) {
        int c = C.at(i);
        int b_c = B.at(c-1);

        if(!counts.count(b_c)) { counts[b_c] = 1; }
        else { counts[b_c] += 1; }
    }

    long num = 0;

    for(int i = 0; i < N; ++i) {
        int a = A.at(i);
        if(counts.count(a)) { num += counts.at(a); }
    }

    cout << num << endl;

    return 0;
}
