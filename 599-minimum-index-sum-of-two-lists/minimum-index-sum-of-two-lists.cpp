class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> freq;
        for(int i = 0 ; i < list1.size() ; i++) freq[list1[i]] = i;
        vector<string> ans;
        int mini = INT_MAX;
        for(int i = 0 ; i < list2.size() ; i++){
            if(freq.count(list2[i])){
                int sum = freq[list2[i]] + i;
                if(sum < mini) mini = sum , ans.clear() , ans.push_back(list2[i]);
                else if(sum == mini) ans.push_back(list2[i]);
            }
        }
        return ans;







        //unordered_map<string,int> freq;
        //int mini = INT_MAX;
        //for(int i=0 ; i<list1.size() ; i++){
        //    for(int j=0 ; j<list2.size() ; j++){
        //        if(list1[i] == list2[j]) mini = min(mini , i+j) , freq[list1[i]] = (i+j);
        //    }
        //}
        //vector<string> ans;
        //for(auto [k,v]:freq){
        //    if(v == mini) ans.push_back(k);
        //}
        //return ans;
    }
};