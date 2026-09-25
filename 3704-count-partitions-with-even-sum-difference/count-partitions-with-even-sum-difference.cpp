class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size() , c = 0;
        vector<int> prefix(n) , suffix(n);
        for(int i=0 ; i<n ; i++) prefix[i] = (i ? prefix[i-1] : 0) + nums[i];
        for(int i=n-1 ; i>=0 ; i--) suffix[i] = (i == n-1 ? 0 : suffix[i+1]) + nums[i];
        for(int i=1 ; i<n ; i++){
            int diff = abs(prefix[i-1] - suffix[i]);
            if(diff % 2 == 0) c++;
        }
        return c;
    }
};