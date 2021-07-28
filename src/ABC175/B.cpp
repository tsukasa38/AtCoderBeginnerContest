#include <vector>
#include <iostream>
using namespace std;

bool is_triangle(int &a, int &b, int &c) {
    return (a != b) & (b != c) && (c != a) && (a + b > c) && (b + c > a) && (c + a > b);
}

int main() {
    int N;
    cin >> N;

    vector<int> L(N);

    for(int i = 0; i < N; ++i) {
        cin >> L.at(i);
    }

    int count = 0;

    for(int i = 0; i < N; ++i) {
        for(int j = i+1; j < N; ++j) {
            for(int k = j+1; k < N; ++k) {
                if(is_triangle(L.at(i), L.at(j), L.at(k))) { ++count; }
            }
        }
    }

    cout << count << endl;

    return 0;
}
