#include <vector>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> fuse(N);

    for(int i = 0; i < N; ++i) {
        int A, B;
        cin >> A >> B;
        fuse.at(i) = pair<int, int>(A, B);
    }

    double collision_duration = 0;

    for(int i = 0; i < N; ++i) {
        int A = fuse.at(i).first;
        int B = fuse.at(i).second;
        collision_duration += (double)A / B;
    }

    double len = 0;
    double duration = 0;

    collision_duration /= 2;

    for(int i = 0; i < N; ++i) {
        int A = fuse.at(i).first;
        int B = fuse.at(i).second;

        if((duration + (double)A / B) <= collision_duration) {
            duration += (double)A / B;
            len += A;
        }else{
            len += (collision_duration - duration) * B;
            break;
        }
    }

    cout << fixed << setprecision(10) << len << endl;

    return 0;
}
