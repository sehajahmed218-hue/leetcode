class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,ans=0;
        unordered_set<char> hash;
        for(int right=0;right<s.size();right++)
        {
           
            while(hash.count(s[right])>0)
            {
                hash.erase(s[left]);
                left++;
            }
             hash.insert(s[right]);
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};