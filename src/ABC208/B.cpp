#include <vector>
#include <iostream>
using namespace std;

int pay(vector<int> &prices, int payment) {
    int num = 0;
    int balance = payment;
    int len = prices.size();

    for(int i = 0; i < len; ++i) {
        int index = len-i-1;
        int price = prices.at(index);

        if(balance >= price) {
            num += balance / price;
            balance %= price;
        }
    }

    return num;
}

int main() {
    int P;
    cin >> P;

    int tmp = 1;
    vector<int> prices(10);

    for(int i = 0; i < 10; ++i) {
        tmp *= i+1;
        prices.at(i) = tmp;
    }

    int num = pay(prices, P);

    cout << num << endl;

    return 0;
}
