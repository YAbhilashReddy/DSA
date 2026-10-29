class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int n = nums.size() , delections = 0 , i = 0;
        while(i+1 < n) {
            if(nums[i] == nums[i+1]) delections++ , i++;
            else i += 2;
        }
        if((n - delections) % 2) delections++;
        return delections;
    }
};