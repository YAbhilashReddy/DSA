class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int c = 0;
        for(int i = 0 ; i < nums.size() ; i++) {
            for(int j = i + 1 ; j < nums.size() ; j++) {
                string s = to_string(nums[i]) + to_string(nums[j]);
                int x = s[0] - '0' , y = s.back() - '0';
                c += (__gcd(x , y) == 1);
            }
        }
        return c;
    }
};