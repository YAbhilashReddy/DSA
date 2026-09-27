class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> arr(101,0);
        int maxi = INT_MIN;
        for(int i:nums) arr[i]++ , maxi = max(maxi , arr[i]);
        nums.clear();
        for(int i=0 ; i<maxi ; i++){
            for(int j=1 ; j<101 ; j++) {
                if(arr[j]) nums.push_back(j) , arr[j]--;
            }
        }
        return nums;
    }
};