class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> ans;
        vector<int> ret;
        for(char c:p)
        {
            ans[c]++;
        }
        int left=0;
        for(int right = 0;right<s.size();right++)
        {
            ans[s[right]]--;
            if(right-left+1==p.size())
            {
                bool flag = 1;
                for(char x:p)
                {
                    if(ans[x]!=0)
                    {
                        flag =0;
                        break;
                    }
                }
                if(flag)
                {
                    ret.push_back(left);
                }
                ans[s[left]]++;
                left++; 
            }
        }
        return ret;
    }
};