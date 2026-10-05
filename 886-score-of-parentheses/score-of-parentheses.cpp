class Solution {
public:
    int scoreOfParentheses(string s) {
        vector<int> arr;
        int ans = 0;
        for(char c:s){
            if(c == '(') arr.push_back(ans) , ans = 0;
            else ans = arr.back() + max(ans * 2 , 1) , arr.pop_back();
        }
        return ans;
    }
};