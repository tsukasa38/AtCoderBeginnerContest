#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int payment = ((N % 1000 == 0) ? (N/1000)*1000 : (N/1000 + 1)*1000);
    int change = payment - N;

    cout << change <<endl;

    return 0;
}
