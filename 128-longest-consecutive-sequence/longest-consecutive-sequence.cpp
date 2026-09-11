class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
            return 0;
        sort(nums.begin(),nums.end());
        int ans=1,temp=1;
        for(int i=1;i<nums.size();i++)
        {
            if( nums[i] == nums[i-1] + 1)
                temp++;
            else if( nums[i] == nums[i-1])
                continue;
            else
                temp = 1;
            ans = max(ans,temp);
        }
        return ans;
    }
};