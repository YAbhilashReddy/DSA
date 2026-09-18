class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int c = 0;
        for(int i=0 ; i<nums.size() ; i++){
            for(int j=i+1 ; j<nums.size() ; j++){
                for(int k=j+1 ; k<nums.size() ; k++){
                    bool a = nums[i] + nums[j] > nums[k];
                    c += a;
                }
            }
        }
        return c;
    }
};