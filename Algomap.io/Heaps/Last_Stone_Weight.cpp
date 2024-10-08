class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap(stones.begin(), stones.end());

        while(maxHeap.size() > 1){
            int largest = maxHeap.top();
            maxHeap.pop();
            int nextLargest = maxHeap.top();
            maxHeap.pop();

            if(largest != nextLargest){
                maxHeap.push(largest - nextLargest);
            }
        }

        return maxHeap.empty() ? 0 : maxHeap.top();
    }
};
