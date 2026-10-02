class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n) , prefix(n);
        for(int i=0 ; i<n ; i++) prefix[i] = (i ? prefix[i-1] : 0) + nums[i];
        for(int i=0 ; i<n ; i++){
            int leftSum = (i * nums[i]) - (i ? prefix[i-1] : 0);
            int rightSum = (prefix[n-1] - prefix[i]) - (nums[i] * (n-i-1));
            ans[i] = leftSum + rightSum;
        }
        return ans;
    }
};