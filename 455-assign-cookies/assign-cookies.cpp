class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(s.empty()) return 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int ans=0,j=0;
        for(int x:g)
        {
            if(j==s.size()) break;
            while(x>s[j])
            {
                j++;
                if(j==s.size()) break;
            }
            if(j==s.size()) break;
            if(x<=s[j])
            {
                j++;
                ans++;
            }
            
            
        }
        return ans;
    }
};