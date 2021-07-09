#include <vector>
#include <iostream>
using namespace std;

int main() {
    long A, B, W;
    cin >> A >> B >> W;

    long w = 1000 * W;

    vector<int> orange_num;

    for(int i = 0; i <= 1000000; ++i) {
        if(A*i <= w && w <= B*i) {
            orange_num.push_back(i);
        }
    }

    int len = orange_num.size();

    if(len == 0) {
        cout << "UNSATISFIABLE" << endl;
        return 0;
    }

    if(len == 1) {
        int num = orange_num.at(0);
        cout << num << " " << num << endl;
        return 0;
    }

    if(len > 1) {
        int min_num = orange_num.at(0);
        int max_num = orange_num.at(len-1);
        cout << min_num << " " << max_num << endl;
        return 0;
    }
}
