class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size() , low = 0 , high = n-1;
        while(low <= high){
            int mid = (low + high) / 2 , papers = n - mid;
            if(citations[mid] >= papers) high = mid - 1;
            else low = mid + 1;
        }
        return n - low;
    }
};