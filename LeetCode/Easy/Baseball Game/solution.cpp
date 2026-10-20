class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> st;
        for(string c:operations){
            if(c == "+") {
                int p = st.back() , pp = st[st.size() - 2];
                st.push_back(p + pp);
            } else if(c == "D"){
                int p = st.back();
                st.push_back(p * 2);
            } else if(c == "C") st.pop_back();
            else {
                int x = stoi(c);
                st.push_back(x);
            }
        }
        int res = 0;
        for(int i:st) res += i;
        return res;
    }
};