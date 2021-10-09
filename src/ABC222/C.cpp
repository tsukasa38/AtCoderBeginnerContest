#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int is_win(char &player1, char &player2) {
    if(player1 == 'G' && player2 == 'C') { return 1; }
    if(player1 == 'G' && player2 == 'P') { return -1; }
    if(player1 == 'C' && player2 == 'G') { return -1; }
    if(player1 == 'C' && player2 == 'P') { return 1;}
    if(player1 == 'P' && player2 == 'G') {return 1; }
    if(player1 == 'P' && player2 == 'C') { return -1; }
    return 0;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<char>> A(2*N, vector<char>(M));

    for(int i = 0; i < 2*N; ++i) {
        for(int j = 0; j < M; ++j) {
            cin >> A.at(i).at(j);
        }
    }

    vector<pair<int, int>> members(2*N);

    for(int i = 0; i < 2*N; ++i) {
        members.at(i) = pair<int, int>(0, i+1);
    }

    for(int i = 0; i < M; ++i) {
        for(int j = 0; j < N; ++j) {
            int member1_id = members.at(2*j).second;
            int member1_win = members.at(2*j).first;
            int member2_id = members.at(2*j+1).second;
            int member2_win = members.at(2*j+1).first;

            int result = is_win(A.at(member1_id-1).at(i), A.at(member2_id-1).at(i));

            if(result == 1) { ++members.at(2*j).first; }
            if(result == -1) { ++members.at(2*j+1).first; }
        }

        sort(members.begin(), members.end(), [](pair<int, int> const &lhs, pair<int, int> const &rhs) {
            if(lhs.first == rhs.first) { return lhs.second < rhs.second; }
            else { return lhs.first > rhs.first; }
        });
    }

    for(int i = 0; i < 2*N; ++i) {
        cout << members.at(i).second << endl;
    }

    return 0;
}
