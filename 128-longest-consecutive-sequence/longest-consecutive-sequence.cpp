class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
            return 0;
        unordered_set<int> hash(nums.begin(),nums.end());
        int ans=0,temp=0;
        for(int x:hash)
        {
            if(!hash.count(x-1))
            {
                int i=0;
                while(hash.count(x+i))
                {
                    i++;
                }
                ans = max(ans,i);
            }
        }
        return ans;
    }
};