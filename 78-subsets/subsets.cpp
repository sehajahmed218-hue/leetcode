class Solution {
public:
    void sub(vector<vector<int>>& ans,vector<int>& temp,vector<int>& arr,int st,int en)
    {
        if(st==en)
        {   
            ans.push_back(temp); 
            return;
        }
        sub(ans,temp,arr,st+1,en);
        temp.push_back(arr[st]);
        sub(ans,temp,arr,st+1,en);
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        sub(ans,temp,nums,0,nums.size());
        return ans;
    }
};