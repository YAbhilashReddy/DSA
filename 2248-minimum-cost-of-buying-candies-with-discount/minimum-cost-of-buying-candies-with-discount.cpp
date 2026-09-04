class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int total = 0 , c = 0;
        sort(cost.begin() , cost.end());
        for(int i = cost.size()-1 ; i>=0 ; i--){
            if(c < 2) total += cost[i] , c++;
            else c = 0;
        }
        return total;
    }
};