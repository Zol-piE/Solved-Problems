class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i =0, l = 0, m =0;
        int n = size(nums);
        while(i<n)
        {
            m = max(m,i+nums[i]);
            if(i==l)
            {
                l = m;
            }
            if(l >= (n-1) ) return true;
            i++;
            if(i>l) return false;
        }
        return false;
    }
};