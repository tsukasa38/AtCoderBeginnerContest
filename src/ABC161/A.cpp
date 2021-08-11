#include <vector>
#include <iostream>
using namespace std;

void swap(vector<int> &arr, int i, int j) {
    int tmp = arr.at(i);
    arr.at(i) = arr.at(j);
    arr.at(j) = tmp;
}

void print(vector<int> &arr) {
    for(int num: arr) { cout << num << " "; }
    cout << endl;
}

int main() {
    vector<int> box(3);
    cin >> box.at(0) >> box.at(1) >> box.at(2);

    swap(box, 0, 1);
    swap(box, 0, 2);

    print(box);

    return 0;
}
