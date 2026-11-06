class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int c = 0;
        for(int i = 0 ; i < nums.size() ; i++) {
            for(int j = i + 1 ; j < nums.size() ; j++) {
                string s = to_string(nums[i]) ;
                int x = s[0] - '0' , y = nums[j] % 10;
                c += (__gcd(x , y) == 1);
            }
        }
        return c;
    }
};