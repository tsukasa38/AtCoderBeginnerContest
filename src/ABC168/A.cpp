#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int x = N % 10;
    string counter_suffix = "";

    if(x == 2 || x == 4 || x == 5 || x == 7 || x == 9) { counter_suffix = "hon"; }
    if(x == 0 || x == 1 || x == 6 || x == 8) { counter_suffix = "pon"; }
    if(x == 3) { counter_suffix = "bon"; }

    cout << counter_suffix << endl;

    return 0;
}
