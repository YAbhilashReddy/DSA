class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        if(deck.size() <= 1) return false;
        unordered_map<int,int> freq;
        for(int i : deck) freq[i]++;
        int gcd = 0;
        for(auto [k,v] : freq) {
            if(!gcd) gcd = v;
            else gcd = __gcd(gcd , v);
        }
        return gcd >= 2;
    }
};