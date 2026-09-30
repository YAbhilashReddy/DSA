class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = shifts.size();
        for(int i=n-1 ; i>=0 ; i--) shifts[i] = ((i == n-1 ? 0 : shifts[i+1]) + shifts[i]) % 26;
        for(int i=0 ; i<n ; i++){
            int m = ((s[i] - 'a') + shifts[i]) % 26;
            s[i] = (char)('a' + m);
        }
        return s;
    }
};