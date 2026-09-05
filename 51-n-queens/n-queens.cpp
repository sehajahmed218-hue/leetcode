class Solution {
public:
    void find(vector<vector<string>>& ans,vector<string>& board,int n,vector<bool>& col,vector<bool>& ld,vector<bool>& rd,int row)
    {
        if(row==n)
        {   
            ans.push_back(board);
            return;
        }
        for(int i=0;i<n;i++)
        {
            if(!ld[n-1+i-row] && !rd[row+i] && !col[i])
            {
                board[row][i]='Q';
                ld[n-1+i-row]=1;
                rd[row+i]=1;
                col[i]=1;
                find(ans,board,n,col,ld,rd,row+1);
                board[row][i]='.';
                ld[n-1+i-row]=0;
                rd[row+i]=0;
                col[i]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string>board(n);
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        board[i].push_back('.');
        vector<bool> column(n,0);
        vector<bool> ld(2*n-1,0);
        vector<bool> rd(2*n-1,0);
        find(ans,board,n,column,ld,rd,0);

        return ans;
    }
};