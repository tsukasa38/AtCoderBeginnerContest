#include <iostream>
using namespace std;

int main() {
    int K;
    string S;
    cin >> S >> K;

    int N = S.size();

    int k = 0;
    int num = 0;
    int right = 0;
    int max_num = 0;

    for(int left = 0; left < N; ++left) {
        while(right < N) {
            if(S.at(right) == '.' && k == K) { break; }
            if(S.at(right) == '.' && k < K) { ++k; }
            ++right;
            ++num;
        }

        max_num = max(max_num, num);

        if(S.at(left) == '.') { --k; }
        --num;
    }

    cout << max_num << endl;

    return 0;
}
