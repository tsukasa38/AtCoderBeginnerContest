#include <map>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> S(N);

    for(int i = 0; i < N; ++i) {
        cin >> S.at(i);
    }

    map<string, bool> is_exclamation_mark;

    string log = "satisfiable";

    for(int i = 0; i < N; ++i) {
        string str = S.at(i);
        char first_char = str.at(0);

        if(first_char == '!') { str = str.substr(1); }
        if(!is_exclamation_mark.count(str)){ is_exclamation_mark[str] = (first_char == '!'); }
        if(is_exclamation_mark.count(str) && first_char == '!' && !is_exclamation_mark.at(str)) { log = str; break; }
        if(is_exclamation_mark.count(str) && first_char != '!' &&  is_exclamation_mark.at(str)) { log = str; break; }
    }

    cout << log << endl;

    return 0;
}
