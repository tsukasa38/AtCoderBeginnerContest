#include <vector>
#include <iostream>
using namespace std;

int binary_search(vector<int> &vec, int value) {
    int left = -1;
    int right = (int)vec.size();

    while(right - left > 1) {
        int mid = left + (right - left) / 2;

        if(vec.at(mid) >= value) { right = mid; }
        else { left = mid; }
    }

    return right;
}

int main() {
    int L, Q;
    cin >> L >> Q;

    vector<pair<int, int>> query(Q);

    for(int i = 0; i < Q; ++i) {
        int c, x;
        cin >> c >> x;
        query.at(i) = pair<int, int>(c, x);
    }

    vector<int> wood = {0, L};

    for(int i = 0; i < Q; ++i) {
        int c = query.at(i).first;
        int x = query.at(i).second;
        int j = binary_search(wood, x);

        if(c == 1) { wood.insert(wood.begin() + j, x); }
        if(c == 2) { cout << wood.at(j) - wood.at(j-1) << endl; }
    }

    return 0;
}
