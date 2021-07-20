#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int num = 0;

    for(int i = 1; i <= N; ++i) {
        int x = i;
        int y = i;
        bool is_include_seven = false;

        while(x) {
            if(x % 10 != 7) { x /= 10; }
            else { is_include_seven = true; break; }
        }

        while(y) {
            if(y % 8 != 7) { y /= 8; }
            else { is_include_seven = true; break; }
        }

        if(!is_include_seven) { ++num; }
    }

    cout << num << endl;

    return 0;
}
