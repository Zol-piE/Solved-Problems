class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int i ,j;
        i = numBottles;
        j = numExchange;
        int sum = numBottles;
        while(i>=j)
        {
            int r = i % j;
            int k = i / j;
            sum += k;
            i = (k+r);
        }
        return sum;
    }
};