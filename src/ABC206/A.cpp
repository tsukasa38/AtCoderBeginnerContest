#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int price = (108 * N) / 100;

    if(price == 206) { cout << "so-so" << endl; }
    else if(price < 206) { cout << "Yay!" << endl; }
    else if(price > 206) { cout << ":(" << endl; }

    return 0;
}
