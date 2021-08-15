#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    string T;

    if(S == "Sunny") { T = "Cloudy"; }
    if(S == "Cloudy") { T = "Rainy"; }
    if(S == "Rainy") { T = "Sunny"; }

    cout << T << endl;

    return 0;
}
