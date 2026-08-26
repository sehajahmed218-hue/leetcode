class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,ans=0;
        bool seen[256]={};
        for(int right=0;right<s.size();right++)
        {
           
            while(seen[(unsigned char)s[right]]>0)
            {
                seen[s[left]]=false;
                left++;
            }
            seen[s[right]]=true;
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};