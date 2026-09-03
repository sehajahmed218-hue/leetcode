class Solution {
public:
    void permut(vector<vector<int>>& ans,vector<int>& arr,int n)
    {
        if(arr.size()==n)
        {
            ans.push_back(arr);
            return;
        }
        for(int i=n;i<arr.size();i++)
        {
            swap(arr[n],arr[i]);
            permut(ans,arr,n+1);
            swap(arr[n],arr[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permut(ans,nums,0);
        return ans;
    }
};