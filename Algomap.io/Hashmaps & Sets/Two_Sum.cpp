class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        for(int i = 0; i < nums.size(); i++){
            hash[nums[i]] = i;
        }

        for(int i = 0; i < nums.size(); i++){
            int y = target - nums[i];
            if(hash.find(y) != hash.end() && hash[y] != i){
                return {i, hash[y]};
            }
        }

        throw invalid_argument("No two sum solution");
    }
};
