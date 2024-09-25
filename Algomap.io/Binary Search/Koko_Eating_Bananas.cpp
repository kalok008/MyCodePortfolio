class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = max_element(piles.begin(), piles.end());

        while(left < right){
            int mid = left + (right - left) / 2;

            if(canFinish(piles, h, mid)){
                right = mid;
            }else{
                left = mid + 1;
            }
        }

        return left;
    }

private:
    bool canFinish(const vector<int>& piles, int h, int k){
        int hours = 0;
        for(int pile : piles){
            hours += ceil(static_cast<double>(pile) / k);
        }
        return hours <= h;
    }
};
