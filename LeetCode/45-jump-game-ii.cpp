class Solution {
public:
	int BFA(vector<int>& nums,int pos = 0  ) {
        int n = size(nums) -1;
        if(pos == n ) return 0;
        int m = 10001;
        for(int i =1; (pos+i)<= n && i<=nums[pos];i++)
        {
        	m = min(m,1+ BFA(nums,pos+i));
        }
        return m;
    }
    int BfaMemo(vector<int>& nums,vector<int>&dp,int n ,int pos = 0 ) {
        if(dp[pos]!=100001) return dp[pos];
        int m = 100001;
        for(int i =1; (pos+i)<= n && i<=nums[pos];i++)
        {
        	m = min(m,1+ BfaMemo(nums,dp,n,pos+i));
        }
        dp[pos] = m;
        return dp[pos];
    }
    int jumpfun(vector<int>& nums) {
        int n = size(nums);
        vector<int> dp(n,100001);
        dp[n-1] = 0;
        int m = BfaMemo(nums,dp,n-1);
        return m;
    }
    int jump(vector<int>& nums) {
        int   n = size(nums);
        int i =0, m_pos = 0 , last = 0;
        int j = 0;
        while(last < n-1)
        {
        	m_pos =  max(m_pos,i + nums[i]);
        	if( i == last )
        	{
        		last = m_pos; // changes then it finds the maximum possible pos
        		j++;
        	}
        	i++; // iterate all items until last index is found
        }
        return j;

    }
};