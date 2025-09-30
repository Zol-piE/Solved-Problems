class Solution {
public:
	class Solution {
public:
    int jump(vector<int>& nums,int pos = 0  ) {
        int n = size(nums) -1;
        if(pos == n ) return 0;
        int m = 10001;
        for(int i =1; (pos+i)<= n && i<=nums[pos];i++)
        {
        	m = min(m,1+ jump(nums,pos+i));
        }
        return m;
    }
};
    int bfaMemo(vector<int>& nums,vector<int> &dp ,int pos = 0  ) { //Brute force Approach
        if(pos == size(nums)) return 0;
        if(dp[pos] !==100001 ) dp[pos];
        int m = 100001;
        for(int i =1;i<=nums[pos];i++)
        {
        	m = min(m,1+bfaMemo(nums,pos+i));
        }
        dp[pos] = m;
        return dp[pos];
    }
    int jump(vector<int>& nums) {
        int n = size(nums);
        vector<int> dp(n,100001);

        return m;
    }
};