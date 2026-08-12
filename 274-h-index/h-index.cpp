class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin() , citations.end());
        int n = citations.size();
        for(int i=0 ; i<n ; i++){
            if(citations[i] >= n-i) return n-i;
        }
        return 0;

        //int val = 0 , n = *max_element(citations.begin() , citations.end());
        //for(int i=0 ; i<=n ; i++){
        //    int c = 0;
        //    for(int j:citations) c += (j >= i);
        //    val = (c >= i && c > val ? i : val);
        //}
        //return val;
    }
};