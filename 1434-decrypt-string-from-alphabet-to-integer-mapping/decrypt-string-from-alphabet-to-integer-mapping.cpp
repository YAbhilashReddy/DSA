class Solution {
public:
    string freqAlphabets(string s) {
        string ans;
        for(int i=s.length()-1 ;  i>=0 ;){
            if(s[i] == '#'){
                int n = stoi(s.substr(i-2 , 2));
                i -= 3;
                char c = 'a' + n - 1;
                ans.push_back(c);
            } else {
                int n = s[i] - '0';
                char c = 'a' + n - 1;
                ans.push_back(c);
                i--;
            }
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};