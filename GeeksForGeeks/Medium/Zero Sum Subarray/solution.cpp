class Solution {
  public:
    bool subArrayExists(vector<int>& arr) {
        for(int i=1 ; i<arr.size() ; i++) arr[i] += arr[i-1];
        unordered_set<int> st;
        for(int i:arr){
            if(i == 0) return true;
            else if(st.count(i)) return true;
            else st.insert(i);
        }
        return false;
    }
}; 