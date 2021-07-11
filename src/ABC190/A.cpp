#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    string winner;

    if(C == 0 && A == B) { winner = "Aoki"; }
    if(C == 1 && A == B) { winner = "Takahashi";  }
    if(A < B) { winner = "Aoki"; }
    if(A > B) { winner = "Takahashi"; }

    cout << winner << endl;

    return 0;
}
