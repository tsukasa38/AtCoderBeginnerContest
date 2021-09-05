#include <cmath>
#include <vector>
#include <float.h>
#include <iostream>
using namespace std;

double distance(vector<int> &p1, vector<int> &p2, int D) {
    int square_sum = 0;

    for(int i = 0; i < D; ++i) {
        int diff = p1.at(i) - p2.at(i);
        square_sum += pow(diff, 2);
    }

    return sqrt(square_sum);
}

int main() {
    int N, D;
    cin >> N >> D;

    vector<vector<int>> X(N, vector<int>(D));

    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < D; ++j) {
            cin >> X.at(i).at(j);
        }
    }

    int count = 0;

    for(int i = 0; i < N; ++i) {
        for(int j = i+1; j < N; ++j) {
            double dist = distance(X.at(i), X.at(j), D);
            if(dist - (int)dist < DBL_MIN) { ++count; }
        }
    }

    cout << count << endl;

    return 0;
}
