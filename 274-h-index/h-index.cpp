class Solution {
public:
    int hIndex(vector<int>& citations) {
        int val = 0 , n = *max_element(citations.begin() , citations.end());
        for(int i=0 ; i<=n ; i++){
            int c = 0;
            for(int j:citations) c += (j >= i);
            val = (c >= i && c > val ? i : val);
        }
        return val;
    }
};