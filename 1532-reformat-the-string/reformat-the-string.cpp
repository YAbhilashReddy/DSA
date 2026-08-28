class Solution {
public:
    string reformat(string s) {
        string chars = "" , digits = "";
        for(char c:s) isalpha(c) ? chars.push_back(c) : digits.push_back(c);
        int n = chars.length() , m = digits.length();
        if(abs(n - m) > 1) return "";
        bool alpha = n > m;
        int i = 0 , j = 0 , k = 0;
        while(i < s.length()){
            if(alpha) s[i++] = chars[j++];
            else s[i++] = digits[k++];
            alpha = !alpha;
        }
        return s;
    }
};