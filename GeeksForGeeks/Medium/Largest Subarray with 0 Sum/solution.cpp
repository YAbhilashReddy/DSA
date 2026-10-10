class Solution {
  public:
    int maxLength(vector<int>& arr) {
        int n = arr.size();
        for(int i=0 ; i<n ; i++) arr[i] += arr[i-1];
        unordered_map<int,int> freq;
        freq[0] = -1;
        int maxi = 0;
        for(int i=0 ; i<n ; i++){
            if(freq.count(arr[i])) maxi = max(maxi , (i-freq[arr[i]]));
            else freq[arr[i]] = i;
        }
        return maxi;
    }
};