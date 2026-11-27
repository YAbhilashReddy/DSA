class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size() , ans = 0;
        if(n <= 8) ans = n;
        else if(n > 8 && n <= 16) {
            ans = 8;
            ans += (n - 8) * 2;
        } else if(n > 16 && n <= 24) {
            ans = 24;
            ans += (n - 16) * 3;
        } else if(n > 24) {
            ans = 48;
            ans += (n - 24) * 4;
        }
        return ans;
    }
};