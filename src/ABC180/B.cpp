#include <cmath>
#include <vector>
#include <iomanip>
#include <iostream>
using namespace std;

long long Manhattan_distance(vector<long long> &X) {
    long long num = 0;
    int dim = X.size();

    for(int i = 0; i < dim; ++i) {
        num += abs(X.at(i));
    }

    return num;
}

double Euclidean_distance(vector<long long> &X) {
    long long num = 0;
    int dim = X.size();

    for(int i = 0; i < dim; ++i) {
        num += abs(X.at(i) * X.at(i));
    }

    return sqrt(num);
}

long long Chebyshev_distance(vector<long long> &X) {
    long long num = 0;
    int dim = X.size();

    for(int i = 0; i < dim; ++i) {
        num = max(abs(X.at(i)), num);
    }

    return num;
}

int main() {
    int N;
    cin >> N;

    vector<long long> X(N);

    for(int i = 0; i < N; ++i) {
        cin >> X.at(i);
    }

    long long dist1 = Manhattan_distance(X);
    double dist2 = Euclidean_distance(X);
    long long dist3 = Chebyshev_distance(X);

    cout << dist1 << endl;
    cout << fixed << setprecision(15) << dist2 << endl;
    cout << dist3 << endl;

    return 0;
}
