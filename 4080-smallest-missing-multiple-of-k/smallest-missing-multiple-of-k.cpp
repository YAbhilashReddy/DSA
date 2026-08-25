class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> arr(nums.begin() , nums.end());
        for(int i=k ; ; i+=k){
            if(!arr.count(i)) return i;
        }
    }
};