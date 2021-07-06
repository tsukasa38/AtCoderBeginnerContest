#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int day = 1;
    int savings = 1;

    while(savings < N) {
        savings += ++day;
    }

    cout << day << endl;

    return 0;
}
