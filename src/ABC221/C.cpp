#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string N;
    cin >> N;

    int len = N.size();

    sort(N.begin(), N.end());

    int max_mul = 0;

    do {
        for(int i = 0; i < len-1; ++i) {
            string s = N.substr(0, i+1);
            string t = N.substr(i+1);
            int sint = stoi(s);
            int tint = stoi(t);

            if(s == to_string(sint) && t == to_string(tint)) {
                max_mul = max(max_mul, sint*tint);
            }
        }
    } while(next_permutation(N.begin(), N.end()));

    cout << max_mul << endl;

    return 0;
}
