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
        int n = nums.size() , j = n-1;
        int prime = 0;
        for(int i = 0 ; i < n ; i++){
            if(checkPrime(nums[i][i])) prime = max(prime , nums[i][i]);
            if(i != j && checkPrime(nums[i][j])) prime = max(prime , nums[i][j]);
            j--;
        }
        return prime;
    }
};