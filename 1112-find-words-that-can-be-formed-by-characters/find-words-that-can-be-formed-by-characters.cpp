class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        array<int, 26> available{};
        for (char c : chars) available[c - 'a']++;
        int ans = 0;
        for (const string& word : words) {
            array<int, 26> used{};
            bool possible = true;
            for (char c : word) {
                int i = c - 'a';
                if (++used[i] > available[i]) {
                    possible = false;
                    break;
                }
            }
            if (possible)
                ans += word.size();
        }
        return ans;
    }
};