#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long N;
    cin >> N;

    string spell = "";
    long long num = N;

    while(num) {
        if((num % 2) != 0) { num += -1; spell.push_back('A'); }
        else { num /= 2; spell.push_back('B'); }
    }

    reverse(spell.begin(), spell.end());
    cout << spell << endl;

    return 0;
}
