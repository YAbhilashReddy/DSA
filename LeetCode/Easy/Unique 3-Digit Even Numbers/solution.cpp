class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int ans = 0;
        vector<int> temp(10,0);
        for(auto x : digits)
        temp[x]++;

        for(int i=1; i<=9; i++){
            if(temp[i] == 0) continue;
            temp[i]--;
            for(int j=0; j<=9; j++){
                if(temp[j] == 0) continue;
                temp[j]--;
                for(int k=0; k<9; k += 2){
                    if(temp[k] == 0) continue;
                    else ans++;
                }
                temp[j]++;
            }
            temp[i]++;
        }
        return ans;
    }
};