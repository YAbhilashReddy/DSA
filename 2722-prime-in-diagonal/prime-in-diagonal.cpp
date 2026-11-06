class Solution {
public:
    bool checkPrime(int n){
        if(n < 2) return false;
        for(int i = 2 ; i * i <= n ; i++){
            if(n % i == 0) return false;
        }
        return true;
    }

    int diagonalPrime(vector<vector<int>>& nums) {
        vector<int> possibleNums;
        int n = nums.size() , j = n-1;
        for(int i = 0 ; i < n ; i++){
            possibleNums.push_back(nums[i][i]);
            if(i != j) possibleNums.push_back(nums[i][j]);
            j--;
        }
        int prime = 0;
        for(int i:possibleNums) {
            if(checkPrime(i)) prime = max(prime , i);
        }
        return prime;
    }
};