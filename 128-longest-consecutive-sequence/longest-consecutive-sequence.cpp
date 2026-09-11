class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_set<int> hash(nums.begin(),nums.end()),x;
        int ans=0,temp=0;
        for(int i=0;i<nums.size();i++)
        {
            x.insert(nums[i]);
            temp = max(temp,(int)x.size());
            if(!hash.count(nums[i]+1))
            {
                x.clear();
            }
        }
        return temp;
    }
};