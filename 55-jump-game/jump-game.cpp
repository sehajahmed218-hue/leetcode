class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i=0,farthest=0;
        while(i<nums.size())
        {
            if(i>farthest)
            {
                return false;
            }
            farthest=max(farthest,i+nums[i]);
            i++;
            if(farthest >= nums.size()-1) return true;
        }
        return false;
        
    }
};