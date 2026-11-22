class Solution {
public:
    bool checkString(string s) {
        bool r = true;
        for(int i=0 ; i<s.length()-1 ; i++){
            if(s[i] == 'b' && s[i+1] == 'a') r = false;
        }
        return r;
    }
};