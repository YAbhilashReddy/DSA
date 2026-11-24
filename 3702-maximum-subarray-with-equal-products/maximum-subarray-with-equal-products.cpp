class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> subarrays;
        for(int i = 0 ; i < n ; i++) {
            for(int j = i ; j < n ; j++) {
                vector<int> temp;
                for(int k = i ; k <= j ; k++) temp.push_back(nums[k]);
                subarrays.push_back(temp);
            }
        }
        int maxi = INT_MIN;
        for(auto subarray : subarrays) {
            long long product = reduce(subarray.begin() , subarray.end() , 1 , multiplies<long long>());
            int GCD = reduce(subarray.begin() , subarray.end() , 0 , [](int a, int b) {
                return gcd(a,b);
            });
            int LCM = reduce(subarray.begin() , subarray.end() , 1 , [](int a , int b) {
                return lcm(a,b);
            });
            int N = subarray.size();
            if(product == (GCD * LCM)) maxi = max(maxi , N);
        }
        return maxi;
    }
};