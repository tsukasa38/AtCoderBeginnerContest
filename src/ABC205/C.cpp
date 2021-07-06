#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    if(A == B) {
        cout << "=" << endl;
        return 0;
    }

    if(A == -B) {
        if(C % 2 == 0) { cout << "=" << endl; }
        if(C % 2 == 1 && A < B) { cout << "<" << endl; }
        if(C % 2 == 1 && A > B) { cout << ">" << endl; }
        return 0;
    }

    if(A >= 0 && B >= 0) {
        if(A < B) { cout << "<" << endl; }
        if(A > B) { cout << ">" << endl; }
        return 0;
    }

    if(A < 0 && B < 0) {
        if(C % 2 == 0 && A < B) { cout << ">" << endl; }
        if(C % 2 == 0 && A > B) { cout << "<" << endl; }
        if(C % 2 == 1 && A < B) { cout << "<" << endl; }
        if(C % 2 == 1 && A > B) { cout << ">" << endl; }
        return 0;
    }

    if(A < 0 || B < 0) {
        if(C % 2 == 1 && A < B) { cout << "<" << endl; }
        if(C % 2 == 1 && A > B) { cout << ">" << endl; }
        if(C % 2 == 0 && abs(A) < abs(B)) { cout << "<" << endl; }
        if(C % 2 == 0 && abs(A) > abs(B)) { cout << ">" << endl; }
        return 0;
    }

}
