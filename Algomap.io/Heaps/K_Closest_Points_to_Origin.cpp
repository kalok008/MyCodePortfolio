/*class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        auto dist = [](const vector<int>& point) {
            return point[0] * point[0] + point[1] * point[1];
        };
        
        priority_queue<vector<int>, vector<vector<int>>, function<bool(const vector<int>&, const vector<int>&)>> maxHeap(
            [&dist](const vector<int>& a, const vector<int>& b) {
                return dist(a) < dist(b);
            }
        );

        for (const auto& point : points) {
            maxHeap.push(point);
            if (maxHeap.size() > k) {
                maxHeap.pop();
            }
        }

        vector<vector<int>> result;
        while (!maxHeap.empty()) {
            result.push_back(maxHeap.top());
            maxHeap.pop();
        }
        return result;
    }
};*/


class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        int n = points.size();
        vector<vector<int>> ans;

        for(int i = 0; i < n; i++){
            int dist = points[i][0] * points[i][0] + points[i][1] * points[i][1];

            pq.push({dist,i});
        }

        for(int i = 0; i < k; i++){
            ans.push_back(points[pq.top().second]);
            pq.pop();
        }

        return ans;

    }
};
