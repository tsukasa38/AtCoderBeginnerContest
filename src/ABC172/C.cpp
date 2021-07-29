#include <vector>
#include <iostream>
using namespace std;

int binary_search(vector<long long> &data, long long &value) {
    int head = -1;
    int tail = data.size();

    while(tail - head > 1) {
        int index = head + (tail - head) / 2;

        if(data.at(index) <= value) { head = index; }
        else { tail = index; }
    }

    return head;
}

int solve(vector<long long> &A, vector<long long> &B, int &K) {
    long long num;
    int N = A.size();
    int M = B.size();

    vector<long long> cumulative_sum_A(N+1);
    vector<long long> cumulative_sum_B(M+1);

    num = 0;

    for(int i = 0; i <= N; ++i) {
        cumulative_sum_A.at(i) = num;
        if(i != N) { num += A.at(i); }
    }

    num = 0;

    for(int i = 0; i <= M; ++i) {
        cumulative_sum_B.at(i) = num;
        if(i != M) { num += B.at(i); }
    }

    int max_num = 0;

    for(int i = 0; i <= N; ++i) {
        long long required_time = cumulative_sum_A.at(i);
        long long remained_time = K - required_time;

        if(remained_time >= 0) {
            int j = binary_search(cumulative_sum_B, remained_time);
            if(max_num < i+j) { max_num = i + j; }
        }
    }

    return max_num;
}

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    vector<long long> A(N);
    vector<long long> B(M);

    for(int i = 0; i < N; ++i) {
        cin >> A.at(i);
    }

    for(int i = 0; i < M; ++i) {
        cin >> B.at(i);
    }

    int ans = solve(A, B, K);

    cout << ans << endl;

    return 0;
}
