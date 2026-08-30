class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi=0,mini=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[maxi]<nums[i])
                maxi=i;
            if(nums[mini]>nums[i])
                mini=i;
        }
        int n=nums.size();
        int cost1 = max(maxi,mini)+1;
        int cost2 = max(n-maxi,n-mini);
        int cost3 = n-cost1+n-cost2+2;
        return min(cost1,min(cost2,cost3));
    }
};