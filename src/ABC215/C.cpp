#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int K;
    string S;
    cin >> S >> K;

    int count = 0;
    int len = S.size();

    sort(S.begin(), S.end());

    do {
        count += 1;
        if(count == K) { cout << S << endl; }
    }
    while(next_permutation(S.begin(), S.end()));

    return 0;
}
