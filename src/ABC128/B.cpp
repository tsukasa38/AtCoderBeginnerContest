#include <tuple>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    int N;
    cin >> N;

    vector<tuple<string, int, int>> restaurants(N);

    for(int i = 0; i < N; ++i) {
        int P;
        string S;
        cin >> S >> P;
        restaurants.at(i) = tuple<string, int, int>(S, P, i+1);
    }

    sort(restaurants.begin(), restaurants.end(), [](tuple<string, int, int> left, tuple<string, int, int> right) {
        if(get<0>(left) == get<0>(right)) { return get<1>(left) > get<1>(right); }
        else { return get<0>(left) < get<0>(right); }
    });

    for(int i = 0; i < N; ++i) {
        int P = get<1>(restaurants.at(i));
        string S = get<0>(restaurants.at(i));
        int index = get<2>(restaurants.at(i));
        cout << index << endl;
    }

    return 0;
}
