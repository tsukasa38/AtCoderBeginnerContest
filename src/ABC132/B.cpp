#include <vector>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p(n);

    for(int i = 0; i < n; ++i) {
        cin >> p.at(i);
    }

    int count = 0;

    for(int i = 0; i < (n-2); ++i) {
        int p1 = p.at(i);
        int p2 = p.at(i+1);
        int p3 = p.at(i+2);
        int min_num = min(p1, min(p2, p3));
        int max_num = max(p1, max(p2, p3));
        if(p2 != min_num && p2 != max_num) { ++count; }
    }

    cout << count << endl;

    return 0;
}
