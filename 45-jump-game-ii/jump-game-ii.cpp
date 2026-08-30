class Solution {
public:
    int jump(vector<int>& nums) {
        int farthest=0,ans=0,cr=0;
        int i=0;
        while(i<nums.size()-1)
        {            
            farthest=max(farthest,i+nums[i]);
            if(i==cr)
            {
                cr=farthest;
                ans++;
            }
            i++;
        }
        return ans;
    }
};