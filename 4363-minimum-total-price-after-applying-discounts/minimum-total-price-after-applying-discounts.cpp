class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.rbegin(), prices.rend());
        sort(discounts.rbegin() , discounts.rend());
        double total = 0 , j = 0;
        for(int i:prices){
            if(j < discounts.size()) total += (i * (100 - discounts[j++]) / 100.0);
            else total += i;
        }
        return total;
    }
};