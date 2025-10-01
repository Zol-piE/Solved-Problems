class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = size(gas);
        int g_sum = 0 ,c_sum =0;
        for(int i =0;i<n;i++)
        {
            g_sum +=gas[i];
            c_sum +=cost[i];
        }
        if(c_sum>g_sum) return -1;
        for(int i =0;i<n;i++)
        {
            if(gas[i]>cost[i])
            {
            int j = i;
            int sum = gas[j] - cost[j];
            j = (j+1) % n;
            while(i!=j)
            {
            sum = sum + gas[j] - cost[j];
            j = (j+1) % n;
            if(i!=j && sum <=0) break;
            }
            if(i==j) return i;
            }
        }
        return 0;
    }
};

// second solve optimized
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = size(gas);
        int g_sum = 0 ,c_sum =0;
        int sum  =0 , s = 0;
        for(int i =0;i<n;i++)
        {
            g_sum +=gas[i];
            c_sum +=cost[i];
            sum += gas[i] - cost[i];
            if(sum<0)
            {
                s = i+1;
                sum =0;
            }
        }
        if(c_sum>g_sum) return -1;
        return s;
    }
};