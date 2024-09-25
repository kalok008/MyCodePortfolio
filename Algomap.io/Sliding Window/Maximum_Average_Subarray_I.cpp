class Solution {
public:
  double findMaxAverage(vector<int> &nums, int k) {
    int sum = accumulate(nums.begin(), nums.begin() + k, 0);
    int maxSum = sum;
    for (int i = k; i < nums.size(); i++) {
      sum = sum + nums[i] - nums[i - k];
      maxSum = max(maxSum, sum);
    }
    return (double)maxSum / k;
  }
};
