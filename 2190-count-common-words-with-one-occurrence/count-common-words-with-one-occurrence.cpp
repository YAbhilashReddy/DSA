class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> freq1 , freq2;
        for(string &s:words1) freq1[s]++;
        for(string &s:words2) freq2[s]++;
        int c = 0;
        for(auto &[k,v]:freq1) c += (v == 1 && freq2[k] == 1);
        return c;
    }
};