class Solution {
public:
    int maxDepth(string s) {
        int m = 0 , c = 0;
        for(char i:s){
            if(i == '(') c++;
            else if(i == ')') c--;
            m = max(m , c);
        }
        return m;
    }
};