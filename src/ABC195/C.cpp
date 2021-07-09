#include <iostream>
using namespace std;

int main() {
    string N;
    cin >> N;

    int len = N.size();

    if(len < 4) {
        int num = 0;
        cout << num << endl;
        return 0;
    }

    if(len < 7) {
        int num = 0;
        num = 1*(stoi(N) - 999);
        cout << num << endl;
        return 0;
    }

    if(len < 10) {
        int num = 0;
        num += 2*(stoi(N) - 999999);
        num += 1*(999999 - 999);
        cout << num << endl;
        return 0;
    }

    if(len < 13) {
        long num = 0;
        num += 3*(stol(N) - 999999999);
        num += 2*(999999999 - 999999);
        num += 1*(999999 - 999);
        cout << num << endl;
        return 0;
    }

    if(len < 16) {
        long num = 0;
        num += 4*(stoul(N) - 999999999999);
        num += 3*(999999999999 - 999999999);
        num += 2*(999999999 - 999999);
        num += 1*(999999 - 999);
        cout << num << endl;
        return 0;
    }

    if(len < 19) {
        long num = 0;
        num += 5*(stoul(N) - 999999999999999);
        num += 4*(999999999999999 - 999999999999);
        num += 3*(999999999999 - 999999999);
        num += 2*(999999999 - 999999);
        num += 1*(999999 - 999);
        cout << num << endl;
        return 0;
    }
}
