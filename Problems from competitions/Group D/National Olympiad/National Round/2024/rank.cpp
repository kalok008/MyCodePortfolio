#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> scores(n);
    unordered_map<int, int> score_count;

    for (int i = 0; i < n; i++) {
        cin >> scores[i];
        score_count[scores[i]]++;
    }

    priority_queue<int> max_heap;

    for (const auto &pair : score_count) {
        max_heap.push(pair.first);
    }

    int current_rank = 0;

    while (!max_heap.empty()) {
        int top_score = max_heap.top();
        max_heap.pop();

        current_rank++;

        if (current_rank >= k) {
            cout << top_score;
            return 0;
        }
    }

    int minn = 100000000;
    for (int res : scores){
        minn = min (res, minn);
    }
    cout<<minn;
    return 0;
}
