#include <map>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> c(N);

    for(int i = 0; i < N; ++i) {
        cin >> c.at(i);
    }

    int max_colors = 0;
    map<int, int> colors;

    for(int i = 0; i < K; ++i) {
        int color = c.at(i);
        if(!colors.count(color)) { colors[color] = 1; }
        else { colors.at(color) += 1; }
    }

    if(max_colors < colors.size()) { max_colors = colors.size(); }

    for(int i = K; i < N; ++i) {
        int new_color = c.at(i);
        int old_color = c.at(i-K);

        if(colors.at(old_color) == 1) { colors.erase(old_color); }
        else { colors.at(old_color) -= 1; }

        if(!colors.count(new_color)) { colors[new_color] = 1; }
        else { colors.at(new_color) += 1; }

        if(max_colors < colors.size()) { max_colors = colors.size(); }
    }

    cout << max_colors << endl;

    return 0;
}
