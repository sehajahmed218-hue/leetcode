class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0,ans=0,zero=0;
        for(int right=0;right<nums.size();right++)
        {
            if(nums[right]==0) zero++;
            if(zero<=k)
            {
                ans=max(ans,right-left+1);
            }
            else 
            {
                if(zero>k)
                {
                    if(nums[left]==0) zero--;
                    left++;
                }
            }
        }
        return ans;
    }
};