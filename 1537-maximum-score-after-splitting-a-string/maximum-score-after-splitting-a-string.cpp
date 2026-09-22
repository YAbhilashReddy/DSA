class Solution {
public:
    int maxScore(string s) {
        int n = s.length() , ans = INT_MIN;
        vector<int> prefix(n) , suffix(n);
        prefix[0] = (s[0] == '0' ? 1 : 0);
        suffix[n-1] = (s[n-1] == '1' ? 1 : 0);
        for(int i=1 ; i<n ; i++) prefix[i] = (!(s[i] - '0') ? prefix[i-1]+1 : prefix[i-1]);
        for(int i=n-2 ; i>=0 ; i--) suffix[i] = (s[i] - '0' ? suffix[i+1]+1 : suffix[i+1]);
        for(int i=0 ; i<n-1 ; i++) ans = max(ans , prefix[i] + suffix[i+1]);
        return ans;
    }
};