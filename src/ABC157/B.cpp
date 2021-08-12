#include <vector>
#include <iostream>
using namespace std;

bool check_bingo(vector<vector<int>> &bingo) {
    for(int i = 0; i < 3; ++i) {
        if((bingo.at(i).at(0) == bingo.at(i).at(1)) && (bingo.at(i).at(1) == bingo.at(i).at(2))) { return true; }
        if((bingo.at(0).at(i) == bingo.at(1).at(i)) && (bingo.at(1).at(i) == bingo.at(2).at(i))) { return true; }
    }

    if((bingo.at(0).at(0) == bingo.at(1).at(1)) && (bingo.at(1).at(1) == bingo.at(2).at(2))) { return true; }
    if((bingo.at(0).at(2) == bingo.at(1).at(1)) && (bingo.at(1).at(1) == bingo.at(2).at(0))) { return true; }

    return false;
}

int main() {
    vector<vector<int>> bingo(3, vector<int>(3));

    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cin >> bingo.at(i).at(j);
        }
    }

    int N;
    cin >> N;

    vector<int> numbers(N);

    for(int i = 0; i < N; ++i) {
        cin >> numbers.at(i);
    }

    for(int i = 0; i < N; ++i) {
        int num = numbers.at(i);

        for(int i = 0; i < 3; ++i) {
            for(int j = 0; j < 3; ++j) {
                if(num == bingo.at(i).at(j)) { bingo.at(i).at(j) = 0; }
            }
        }
    }

    bool ans = check_bingo(bingo);

    cout << (ans ? "Yes" : "No") << endl;

    return 0;
}
