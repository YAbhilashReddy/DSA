class Solution {
public:
    bool isPalindromic(string s) {
        string bs = "";
        for(char c:s){
            int decimal = (int)(c);
            string x = bitset<8>(decimal).to_string();
            bs += x;
        }
        string rev = bs;
        reverse(rev.begin() , rev.end());
        return rev == bs;
    }
};