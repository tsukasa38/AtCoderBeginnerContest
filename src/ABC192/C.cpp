#include <iostream>
#include <algorithm>
using namespace std;

int g1(int x) {
    string str = to_string(x);
    sort(str.begin(), str.end());
    reverse(str.begin(), str.end());
    return stoi(str);
}

int g2(int x) {
    string str = to_string(x);
    sort(str.begin(), str.end());
    return stoi(str);
}

int f(int x) {
    int a = g1(x);
    int b = g2(x);
    return a - b;
}

int main() {
    int N, K;
    cin >> N >> K;

    int a = N;

    for(int i = 0; i < K; ++i) {
        if(a == 0) { break; }
        a = f(a);
    }

    cout << a << endl;

    return 0;
}
