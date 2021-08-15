#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> B(N);
    vector<int> C(N-1);

    for(int i = 0; i < N; ++i) {
        cin >> A.at(i);
    }

    for(int i = 0; i < N; ++i) {
        cin >> B.at(i);
    }

    for(int i = 0; i < (N-1); ++i) {
        cin >> C.at(i);
    }

    int ans = 0;

    for(int i = 0; i < N; ++i) {
        int dish = A.at(i);
        int satisfaction = B.at(dish-1);
        ans += satisfaction;

        if(i > 0) {
            int last_dish = A.at(i-1);

            if(dish - last_dish == 1) {
                ans += C.at(last_dish-1);
            }
        }
    }

    cout << ans << endl;

    return 0;
}
