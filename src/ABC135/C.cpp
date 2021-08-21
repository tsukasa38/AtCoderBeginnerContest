#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N+1);
    vector<int> B(N);

    for(int i = 0; i < (N+1); ++i) {
        cin >> A.at(i);
    }

    for(int i = 0; i < N; ++i) {
        cin >> B.at(i);
    }

    long long kill = 0;

    for(int i = 0; i < N; ++i) {
        int power = B.at(i);
        int town1 = A.at(i);
        int town2 = A.at(i+1);

        if(power <= town1) {
            A.at(i) += -power;
            kill += power;
        }
        else if(power <= (town1 + town2)) {
            A.at(i) = 0;
            A.at(i+1) += -(power - town1);
            kill += power;
        }
        else if(power > (town1 + town2)) {
            A.at(i) = 0;
            A.at(i+1) = 0;
            kill += (town1 + town2);
        }
    }

    cout << kill << endl;

    return 0;
}
