class Solution {
public:
    string toGoatLatin(string sentence) {
        stringstream ss(sentence);
        vector<string> words;
        string word;
        while(ss >> word) words.push_back(word);
        string A = "" , vowels = "aeiouAEIOU" , ans = "";
        for(string wor:words){
            A.push_back('a');
            char c = wor[0];
            if(vowels.find(c) == string::npos) {
                ans += wor.substr(1,wor.length()-1);
                ans.push_back(c) , ans += ("ma" + A + " ");
            } else ans += wor ,  ans += ("ma" + A + " ");
        }
        ans.pop_back();
        return ans;
    }
};