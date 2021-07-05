#include <iostream>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    long count = 0;
    long red_ball_num = 0;
    long blue_ball_num = A;

    if(B >= C*D) {
        cout << -1 << endl;
        return 0;
    }

    while(true) {
        if(blue_ball_num <= red_ball_num*D) { break; }
        blue_ball_num += B;
        red_ball_num += C;
        count += 1;
    }

    cout << count << endl;

    return 0;
}
