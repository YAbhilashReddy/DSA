class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        unordered_map<int,int> pi; 
        int sum = 0, c = 0;
        pi[0] = 1;
        for (int x : arr) {
            sum += x;
            if (pi.find(sum - k) != pi.end()) {
                c += pi[sum - k];
            }
            pi[sum]++;
        }
        return c;
    }
};