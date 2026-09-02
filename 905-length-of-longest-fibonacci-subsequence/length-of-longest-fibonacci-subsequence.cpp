class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n = arr.size() , maxi = 0;
        unordered_set<int> nums(arr.begin() , arr.end());
        for(int i = 0 ; i < n-2 ; i++) {
            for(int  j = i+1 ; j < n-1 ; j++){
                int pp = arr[i] , p = arr[j] , sum = pp + p , len = 2;
                while(nums.find(sum) != nums.end()){
                    pp = p , p = sum , sum = pp + p;
                    maxi = max(maxi , ++len);                    
                }
            }
        }
        return maxi;
    }
};