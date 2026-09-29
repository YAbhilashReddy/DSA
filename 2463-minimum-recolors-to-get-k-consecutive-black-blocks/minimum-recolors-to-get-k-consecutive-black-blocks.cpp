class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int mini = INT_MAX , count = 0;
        for(int i=0 ; i<k ; i++) count += (blocks[i] == 'W');
        mini = min(mini , count);
        for(int i=k ; i<blocks.length() ; i++){
            if(blocks[i-k] == 'W') count--;
            if(blocks[i] == 'W') count++;
            mini = min(mini , count);
        }
        return mini;



        // int mini = INT_MAX , count = 0;
        // string s = blocks.substr(0,k);
        // for(char c:s) count += (c == 'W');
        // mini = min(mini , count);
        // for(int i=k ; i<blocks.length() ; i++){
        //     char ch = s[0];
        //     if(ch == 'W') count--;
        //     s.erase(0,1);
        //     s.push_back(blocks[i]);
        //     if(blocks[i] == 'W') count++;
        //     mini = min(mini , count);
        // }
        // return mini;
    }
};