class Solution {
public:
    bool sumGame(string num) {
        int n = num.length() , leftSum = 0 , rightSum = 0 , leftq = 0 , rightq = 0;
        for(int i = 0 ; i < n ; i++){
            if(i < n / 2){
                if(num[i] == '?') leftq++;
                else leftSum += num[i] - '0';
            } else {
                if(num[i] == '?') rightq++;
                else rightSum += num[i] - '0';
            }
        }
        if((leftq + rightq) % 2) return true;
        return leftSum - rightSum != (rightq - leftq) * 9 / 2; 
        // max to place is 9 and even number of places / 2
    }
};