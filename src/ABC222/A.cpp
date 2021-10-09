#include <iostream>
using namespace std;

int main() {
    string N;
    cin >> N;

    string ans = "0000" + N;

    cout << ans.substr(ans.size() - 4) << endl;

    return 0;
}
