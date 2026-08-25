class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> hash(nums.begin(),nums.end());
        int i=1;
        while(1)
        {
            if(!hash.count(i*k)) return i*k;
            i++;
        }
        return -1;          
    }
};