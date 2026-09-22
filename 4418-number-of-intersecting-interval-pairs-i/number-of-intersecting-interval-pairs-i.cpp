class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        int c = 0;
        for(int i=0 ; i<intervals.size() ; i++){
            for(int j=i+1 ; j<intervals.size() ; j++){
                int x = max(intervals[i][0] , intervals[j][0]);
                int y = min(intervals[i][1] , intervals[j][1]);
                c += (x <= y);
            }
        }
        return c;
    }
};