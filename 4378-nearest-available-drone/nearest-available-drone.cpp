class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int idx , diss = INT_MAX , i = 0;
        for(auto drone:drones){
            int x = drone[0] , y = drone[1] , range = drone[2];
            int total = abs(target[0] - x) + abs(target[1] - y);
            if(total <= range && total < diss) idx = i , diss = total;
            i++;
        }
        idx = (diss == INT_MAX ? -1 : idx);
        return idx;
    }
};