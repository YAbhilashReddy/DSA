class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int maxi = INT_MIN;
        vector<int> arr = {-1,-1};
        for(int i=0 ; i<nums.size() ; i++){
            for(int j=0 ; j<nums.size() ; j++){
                bool con1 = nums[i] + nums[j] == target;
                bool con2 = nums[i] > nums[j];
                if(con1 && con2) {
                    int pro = nums[i] * nums[j];
                    if(pro > maxi) arr[0] = i , arr[1] = j , maxi = pro;
                }
            }
        }
        return arr;

    }
};