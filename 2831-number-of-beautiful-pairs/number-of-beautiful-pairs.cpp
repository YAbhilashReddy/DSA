class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int c = 0;
        for(int i = 0 ; i < nums.size() ; i++) {
            int x = nums[i];
            while(x >= 10) x /= 10;
            for(int j = i + 1 ; j < nums.size() ; j++) {
                int y = nums[j] % 10;
                c += (__gcd(x , y) == 1);
            }
        }
        return c;
    }
};