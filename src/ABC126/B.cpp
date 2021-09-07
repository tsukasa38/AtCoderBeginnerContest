#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    string str1 = S.substr(0, 2);
    string str2 = S.substr(2, 2);

    int num1 = stoi(str1);
    int num2 = stoi(str2);

    if((num1 == 0 || num1 > 12) && (0 < num2 && num2 <= 12)) { cout << "YYMM" << endl; }
    if((0 < num1 && num1 <= 12) && (num2 > 12 || num2 == 0)) { cout << "MMYY" << endl; }
    if((num1 == 0 || num1 > 12) && (num2 == 0 || num2 > 12)) { cout << "NA" << endl; }
    if((0 < num1 && num1 <= 12) && (0 < num2 && num2 <= 12)) { cout << "AMBIGUOUS" << endl; }

    return 0;
}
