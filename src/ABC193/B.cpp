#include <tuple>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<tuple<long, long, long>> shops(N);

    for(int i = 0; i < N; ++i) {
        long duration, price, stock;
        cin >> duration >> price >> stock;
        shops.at(i) = make_tuple(duration*60, price, stock);
    }

    int min_price = 1000000000;

    for(int i = 0; i < N; ++i) {
        long duration, price, stock;
        tie(duration, price, stock) = shops.at(i);

        if(duration < 30 && stock > 0 && min_price > price) { min_price = price; }
        if(duration >= 30 && (stock - (duration - 30) / 60 - 1) > 0 && min_price > price) { min_price = price; }
    }

    if(min_price == 1000000000) { min_price = -1; }

    cout << min_price << endl;

    return 0;
}
