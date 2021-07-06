#include <tuple>
#include <queue>
#include <vector>
#include <iostream>
using namespace std;

int n_breadth_first_search(vector<pair<int, int>> &roads, int &N, int &M) {
    queue<int> q;
    vector<vector<int>> roadmap(N, vector<int>());
    vector<vector<bool>> is_visit(N, vector<bool>(N, false));

    for(int i = 0; i < M; ++i) {
        int start, end;
        tie(start, end) = roads.at(i);
        roadmap.at(start-1).push_back(end-1);
    }

    for(int i = 0; i < N; ++i) {
        is_visit.at(i).at(i) = true;
    }

    for(int i = 0; i < N; ++i) {
        int start = i;
        q.push(start);

        while(!q.empty()) {
            int goal = q.front();
            q.pop();

            if(!is_visit.at(start).at(goal) || start == goal) {
                int len = roadmap.at(goal).size();
                is_visit.at(start).at(goal) = true;

                for(int i = 0; i < len; ++i) {
                    int next = roadmap.at(goal).at(i);
                    q.push(next);
                }
            }
        }
    }

    long path_num = 0;

    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            if(is_visit.at(i).at(j)) { ++path_num; }
        }
    }

    return path_num;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<pair<int, int>> roads(M);

    for(int i = 0; i < M; ++i) {
        int start, end;
        cin >> start >> end;
        roads.at(i) = make_pair(start, end);
    }

    int combination = n_breadth_first_search(roads, N, M);

    cout << combination << endl;

    return 0;
}
