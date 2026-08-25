class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> h1(nums1.begin(),nums1.end()),h2(nums2.begin(),nums2.end());
        vector<int> ans;
        for(int i:h1)
        {
            if(h2.count(i)) ans.push_back(i);
        }
        return ans;
    }
};