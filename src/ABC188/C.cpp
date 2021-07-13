#include <queue>
#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int player_num = pow(2, N);

    vector<int> A(player_num);

    for(int i = 0; i < player_num; ++i) {
        cin >> A.at(i);
    }

    queue<int> q;

    for(int i = 0; i < player_num; ++i) { q.push(i); }

    while(q.size() != 2) {
        int player1 = q.front(); q.pop();
        int player2 = q.front(); q.pop();

        if(A.at(player1) < A.at(player2)) { q.push(player2); }
        else { q.push(player1); }
    }

    int player1 = q.front(); q.pop();
    int player2 = q.front(); q.pop();

    cout << ((A.at(player1) < A.at(player2)) ? (player1+1) : (player2+1)) << endl;

    return 0;
}
