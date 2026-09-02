class Solution {
public:
    void gen(vector<string>& ans,string& temp,int n,int l,int r)
    {
        if(r==n && l==n)
        {
            ans.push_back(temp);
            return;
        }
        if(l<n)
        {
            temp.push_back('(');
            gen(ans,temp,n,l+1,r);
            temp.pop_back();
        }
        if(r<l)
        {
            temp.push_back(')');
            gen(ans,temp,n,l,r+1);
            temp.pop_back();;
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        gen(ans,temp,n,0,0);

        return ans;
    }
};