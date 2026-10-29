class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int c = 0;
        for(int i=1 ; i<nums.size() ; i++){
            c += nums[i] == nums[i-1];
        }
        return c;
    }
};