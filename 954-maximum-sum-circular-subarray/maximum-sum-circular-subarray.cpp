class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = 0 , maxCurrSum = 0 , maxSum = INT_MIN , minCurrSum = 0 , minSum = INT_MAX;
        for(int i:nums){
            total += i;
            maxCurrSum = max(maxCurrSum + i , i) , maxSum = max(maxSum , maxCurrSum);
            minCurrSum = min(minCurrSum + i , i) , minSum = min(minSum , minCurrSum);
        }
        if(minCurrSum == minSum) return maxSum;
        return max(maxSum , total - minSum);
    }
};