#include <iostream>
using namespace std;

int main() {
    int N, L;
    cin >> N >> L;

    int apple_taste1 = L + 1 - 1;
    int apple_tasteN = L + N - 1;
    int apple_pie_taste = (N * (apple_taste1 + apple_tasteN)) / 2;

    if(apple_taste1 > 0) { apple_pie_taste -= apple_taste1; }
    if(apple_tasteN < 0) { apple_pie_taste -= apple_tasteN; }

    cout << apple_pie_taste << endl;

    return 0;
}
