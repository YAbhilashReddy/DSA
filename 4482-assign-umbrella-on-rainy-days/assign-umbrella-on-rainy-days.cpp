class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        vector<string> ans;
        int n = rain.size() , alice = 0 , bob = 0 ;
        if(rain.back()) n-- ;
        for(int i = 0 ; i < n ; i++) {
            if(rain[i] && rain[i] == rain[i+1] && alice <= bob) ans.push_back("Alice") , alice++;
            else if(rain[i]) ans.push_back("Bob") , bob++;
            else ans.push_back("None");
        }
        if(n == rain.size()-1) ans.push_back("Bob");
        return ans;
    }
};