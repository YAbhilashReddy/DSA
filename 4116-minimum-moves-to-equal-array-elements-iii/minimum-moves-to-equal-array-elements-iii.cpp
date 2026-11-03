class Solution {
public:
    int minMoves(vector<int>& nums) {
        int m = *max_element(nums.begin() , nums.end()) , total = 0;
        for(int i :nums) total += m - i;
        return total;
    }
};