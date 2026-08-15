class Solution {
public:
    string replaceDigits(string s) {
        for(int i=1 ; i<s.length() ; i+=2) s[i] += s[i - 1] - '0';
        return s;



        //string ans = "";
        //for(char c:s){
        //    if(c >= 'a' && c <= 'z') ans.push_back(c);
        //    else {
        //        char C = ans.back() + (c - '0');
        //        ans.push_back(C);
        //    }
        //}
        //return ans;
    }
};