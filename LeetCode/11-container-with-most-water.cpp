class Solution {
public:
    int maxArea(vector<int>& height) {
        int i =0, j = height.size()-1;
        long long mx = 0;
        while(j>i)
        {
            int  d = j - i;
            long long m = min(height[i],height[j]);
            mx = max(mx,(d*m));
            if(height[i]==height[j]) { i++; j--;}
            else if(height[i]>height[j]) j--;
            else i++;

        }
        return mx;
    }
};