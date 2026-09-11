class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.empty()) return 0;
        int i = 0;
        int longest = 1;
        int count = 1;
        while (i < nums.size() - 1) {
            if (nums[i] == nums[i + 1]) {
                i++;
            } else if (nums[i] + 1 != nums[i + 1]) {
                count = 1;
                i++;
            } else{
                while (i<nums.size() -1&& nums[i] + 1 == nums[i + 1]) {
                    count++;
                    i++;
                }
            }
                longest = max(longest, count);
        }
        return longest;
    }
};