class Solution {
public:
    string sortSentence(string s) {
        stringstream ss(s);
        string word;
        map<int,string> freq;
        while(ss >> word){
            int n = word.back() - '0';
            word.erase(word.length()-1 , 1);
            freq[n] = word;
        }
        string ans = "";
        for(auto[k,v]:freq) ans += v + ' ';
        ans.pop_back();
        return ans;


        // stringstream ss(s);
        // string word;
        // vector<string> arr(s.length() , "");
        // while(ss >> word){
        //     int n = word.back() - '0';
        //     word.erase(word.length()-1 , 1);
        //     arr[n-1] = word;
        // }
        // string ans = "";
        // for(string x:arr) {
        //     if(!x.empty()) ans += x + ' ';
        // }
        // ans.pop_back();
        // return ans;
    }
};