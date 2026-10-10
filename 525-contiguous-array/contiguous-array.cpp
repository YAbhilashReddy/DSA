class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        for(int i=0 ; i<n ; i++) nums[i] = (!nums[i] ? -1 : nums[i]);
        for(int i=1;  i<n ; i++) nums[i] += nums[i-1];
        unordered_map<int,int> freq;
        freq[0] = -1;
        int maxi = 0;
        for(int i=0 ; i<n ; i++){
            if(freq.count(nums[i])) maxi = max(maxi , i - freq[nums[i]]);
            else freq[nums[i]] = i;
        }
        return maxi;
    }
};