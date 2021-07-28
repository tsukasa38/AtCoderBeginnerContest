#include <set>
#include <iostream>
using namespace std;

int solve(int &K) {
    int num = 7;
    int count = 1;
    set<int> reminds;

    while(true) {
        if(num % K == 0) { return count; }

        num *= 10;
        num += 7;
        num %= K;

        if(reminds.count(num)) { return -1; }
        else { reminds.insert(num); }

        ++count;
    }
}

int main() {
    int K;
    cin >> K;

    int ans = solve(K);

    cout << ans << endl;

    return 0;
}
