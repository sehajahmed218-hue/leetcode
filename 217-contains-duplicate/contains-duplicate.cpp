class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hash(nums.begin(),nums.end());
        return hash.size()!=nums.size();
    }
};