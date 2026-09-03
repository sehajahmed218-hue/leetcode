class Solution {
public:
    void permut(vector<vector<int>>& ans,vector<int>& arr,int n)
    {
        if(n==arr.size())
        {
            ans.push_back(arr);
            return;
        }
        vector<int> v(21,0);
        for(int i=n;i<arr.size();i++)
        {
            if(v[arr[i]+10]==0)
            {
                
                swap(arr[n],arr[i]);
                permut(ans,arr,n+1);
                swap(arr[n],arr[i]);
            }
            v[arr[i]+10]=1;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        
        permut(ans,nums,0);
        return ans;
    }
};