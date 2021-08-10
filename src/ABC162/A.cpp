#include <iostream>
using namespace std;

bool is_containe_seven(int N) {
    int n = N;
    bool ans = false;

    while(n) {
        int num = n % 10;
        n /= 10;

        if(num == 7) { ans = true; }
    }

    return ans;
}

int main() {
    int N;
    cin >> N;

    bool ans = is_containe_seven(N);

    cout << (ans ? "Yes" : "No") << endl;

    return 0;
}
