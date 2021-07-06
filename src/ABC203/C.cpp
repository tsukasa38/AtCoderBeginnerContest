#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<pair<long, int>> friends(N);

    for(int i = 0; i < N; ++i) {
        int money;
        long village;
        cin >> village >> money;
        friends.at(i) = make_pair(village, money);
    }

    sort(friends.begin(), friends.end());

    long money = K;
    long current_village = 0;

    for(int i = 0; i < N; ++i) {
        long next_village = friends.at(i).first;
        long additional_money = friends.at(i).second;
        long require_cost = next_village - current_village;

        if(money < require_cost) {
            current_village += money;
            money = 0;
            break;
        }

        current_village = next_village;
        money += additional_money;
        money -= require_cost;
    }

    if(money > 0) { current_village += money; }

    cout << current_village << endl;

    return 0;
}
