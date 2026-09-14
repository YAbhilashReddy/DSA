class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        vector<int> arr(101);
        for(int i:nums) arr[i]++;
        int c = 0;
        for(int i=0 ; i<nums.size() ; i++){
            for(int j=i+1 ; j<nums.size() ; j++){
                for(int k=j+1 ; k<nums.size() ; k++){
                    if(nums[i] == nums[j] && nums[i] == nums[k] && arr[nums[i]] == 3){
                        c += (j - i == k - j);
                    }
                }
            }
        }
        return c;
    }
};