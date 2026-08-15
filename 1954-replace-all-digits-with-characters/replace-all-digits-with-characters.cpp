class Solution {
public:
    string replaceDigits(string s) {
        string ans = "";
        for(char c:s){
            if(c >= 'a' && c <= 'z') ans.push_back(c);
            else {
                char C = ans.back() + (c - '0');
                ans.push_back(C);
            }
        }
        return ans;
    }
};