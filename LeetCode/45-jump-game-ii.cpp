class Solution {
public:
	int bfa(vector<int>& nums,int pos = 0  ) { //Brute force Approach
        if(pos == size(nums)) return 0;
        int m = INT_MAX;
        for(int i =1;i<=nums[pos];i++)
        {
        	m = min(m,1+bfa(nums,pos+i));
        }
        return m;
    }
    
    int jump(vector<int>& nums,int pos = 0  ) {
        if(pos == size(nums)) return 0;
        int m = INT_MAX;
        for(int i =1;i<=nums[pos];i++)
        {
        	m = min(m,1+jump(nums,pos+i));
        }
        return m;
    }
};