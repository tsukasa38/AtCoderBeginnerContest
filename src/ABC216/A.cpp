#include <iostream>
using namespace std;

int ctoi(char &c) {
    return c - '0';
}

int main() {
    string S;
    cin >> S;

    int len = S.size();

    int X = stoi(S);
    int Y = ctoi(S.at(len-1));

    if(0 <= Y && Y <= 2) { cout << X << "-" << endl; }
    if(3 <= Y && Y <= 6) { cout << X << endl; }
    if(7 <= Y && Y <= 9) { cout << X << "+" << endl; }

    return 0;
}
