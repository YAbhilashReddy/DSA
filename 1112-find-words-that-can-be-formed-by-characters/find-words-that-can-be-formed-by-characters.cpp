class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> alpha(26,0);
        for(char C:chars) alpha[C - 'a']++;
        int count = 0;
        for(auto word:words){
            vector<int> ALPHA = alpha;
            int cou = 0;
            for(char c:word){
                int i = c - 'a';
                if(ALPHA[i] == 1) cou++ , ALPHA[i] = 0;
                else if(ALPHA[i] > 1) cou++ , ALPHA[i]--;
            }
            if(cou == word.length()) count += cou;
        }
        return count;
    }
};