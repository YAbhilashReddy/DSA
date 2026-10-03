class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> arr(n+1,0);
        for(auto booking:bookings){
            for(int i=booking[0] ; i<=booking[1] ; i++) arr[i] += booking[2];
        }
        vector<int> ans;
        for(int i=1 ; i<=n ; i++) ans.push_back(arr[i]);
        return ans;
    }
};