class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i=0 ; i<nums.size() ; i++){
            if(!i || nums[i] != nums[i-1]) freq[nums[i]]++;
        }
        int c = 0;
        for(auto[k,v]:freq) c += (v == 1 ? 1 : 0);
        return c;
    }
};