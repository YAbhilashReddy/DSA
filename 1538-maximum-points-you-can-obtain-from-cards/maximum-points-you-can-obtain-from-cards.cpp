class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        vector<int> prefix(n) , suffix(n);
        for(int i=0 ; i<n ; i++) prefix[i] = (i ? prefix[i-1] : 0) + cardPoints[i];
        for(int i=n-1 ; i>=0 ; i--) {
            suffix[i] = (i == n-1 ? 0 : suffix[i+1]) + cardPoints[i];
        } 
        int maxi = INT_MIN;
        for(int i=0 ; i<=k ; i++){
            if(i == 0) maxi = max(maxi , suffix[n-k]);
            else if(i == k) maxi = max(maxi , prefix[k-1]);
            else {
                int sum = prefix[i-1] + suffix[n - (k-i)];
                maxi = max(maxi , sum);
            }
        }
        return maxi;
    }
};