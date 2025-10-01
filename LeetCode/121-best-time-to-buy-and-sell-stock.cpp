class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = size(prices);
        int m = prices[0];
        int dif = 0;
        for(int i =1;i<n;i++)
        {
            dif = max(dif,(prices[i]-m));
            if(m>prices[i]) m = prices[i];
        }
        return dif;
    }
};