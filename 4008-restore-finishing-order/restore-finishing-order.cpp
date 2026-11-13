class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> freq(order.size() + 1);
        for(int i : friends) freq[i] = 1;
        friends.clear();
        for(int i:order) {
            if(freq[i]) friends.push_back(i);
        }
        return friends;
    }
};