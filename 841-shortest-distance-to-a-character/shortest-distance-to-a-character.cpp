class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.length() , dis = -n;
        vector<int> ans(n);
        for(int i=0 ; i<n ; i++){
            if(s[i] == c) dis = i;
            ans[i] = i - dis;
        }
        dis = 2 * n;
        for(int i=n-1 ; i>=0 ; i--){
            if(s[i] == c) dis = i;
            int left = ans[i] , right = dis - i;
            ans[i] = min(left , right);
        }
        return ans;






        // int n = s.length();
        // vector<int> left(n) , right(n) , ans(n);

        // // Distance to the nearest c on the left side 
        // int prev = -n;
        // for(int i=0 ; i<n ; i++){
        //     if(s[i] == c) prev = i;
        //     left[i] = i-prev;
        // }

        // // Distance to the nearest c on the right side 
        // int next = 2 * n;
        // for(int i=n-1 ; i>=0 ; i--){
        //     if(s[i] == c) next = i;
        //     right[i] = next - i;
        // }

        // //choose the min distance
        // for(int i=0 ; i<n ; i++) ans[i] = min(left[i] , right[i]);

        // return ans;
    }
};