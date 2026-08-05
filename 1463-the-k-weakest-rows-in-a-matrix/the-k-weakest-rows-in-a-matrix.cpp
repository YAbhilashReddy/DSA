class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> pa;
        for(int i=0 ; i<mat.size() ; i++){
            int one = 0;
            for(int j=0 ; j<mat[i].size() ; j++) one += (mat[i][j] == 1 ? 1 : 0);
            pa.push_back({one , i});
        }
        sort(pa.begin() , pa.end());
        vector<int> ans;
        for(int i=0 ; i<k ; i++) ans.push_back(pa[i].second);
        return ans;
    }
};