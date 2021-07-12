#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    vector<pair<int, int>> alcohols(N);

    for(int i = 0; i < N; ++i) {
        int amount, percentage;
        cin >> amount >> percentage;
        alcohols.at(i) = make_pair(amount, percentage);
    }

    int count = 0;
    bool is_drunk = false;
    long alcohol_intake = 0;

    for(int i = 0; i < N; ++i) {
        int amount = alcohols.at(i).first;
        int percentage = alcohols.at(i).second;
        alcohol_intake += amount * percentage;

        if(alcohol_intake > X*100) {
            is_drunk = true;
            count = i+1;
            break;
        }
    }

    cout << (is_drunk ? count : -1) << endl;

    return 0;
}
