class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> freq;
        string s = "";
        for(char c:s1){
            if(c == ' ') freq[s]++ , s = "";
            else s.push_back(c);
        }
        freq[s]++ , s = "";
        for(char c:s2){
            if(c == ' ') freq[s]++ , s = "";
            else s.push_back(c); 
        }
        freq[s]++;
        vector<string> ans;
        for(auto [k,v]:freq){
            if(v == 1) ans.push_back(k);
        }
        return ans;



        //stringstream S1(s1) , S2(s2);
        //string word;
        //unordered_map<string,int> freq;
        //while(S1 >> word) freq[word]++;
        //while(S2 >> word) freq[word]++;
        //vector<string> ans;
        //for(auto[k,v]:freq){
        //    if(v == 1) ans.push_back(k);
        //}
        //return ans;
    }
};