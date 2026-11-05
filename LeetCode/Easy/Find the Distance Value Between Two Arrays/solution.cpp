class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;
        for(int i:arr1){
             int c = 1;
            for(int j:arr2){
                if(abs(i - j) <= d){
                    c = 0;
                    break;
                }
            }
            if(c) count++;
        }
        return count;
    }
};