class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int MOD = 1e9 + 7;
        vector<long long> arr;
        for(int i=0 ; i<n ; i++){
            int total = 0;
            for(int j=i ; j<n ; j++){
                for(int k=i ; k<=j ; k++) total += nums[k];
                arr.push_back(total) , total = 0;
            }
        }
        sort(arr.begin() , arr.end());
        for(int i=1 ; i<arr.size() ; i++) arr[i] += arr[i-1];
        left-- , right--;
        if(!left) return arr[right] % MOD;
        return (arr[right] - arr[left-1]) % MOD;
    }
};