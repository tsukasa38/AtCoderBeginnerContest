#include <iostream>
using namespace std;

int main() {
    string N;
    cin >> N;

    int count = 0;

    for(int i = 1; i < 1000000; ++i) {
        string num = to_string(i) + to_string(i);
        if(stoul(num) <= stoul(N)) { ++count; }
        else { break; }
    }

    cout << count << endl;

    return 0;
}
