class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int N = nums.size();
        int miniIdx = min_element(nums.begin() , nums.end()) - nums.begin();
        int maxiIdx = max_element(nums.begin() , nums.end()) - nums.begin();
        int l = min(miniIdx , maxiIdx) , r = max(miniIdx , maxiIdx);
        return min({r + 1 , N - l , l + 1 + N - r});
    }
};