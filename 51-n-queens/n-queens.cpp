class Solution {
public:
    void find(int row,int n,vector<string>& board,vector<vector<string>>& ans,vector<bool>& column,vector<int>& ldiagonal,vector<int>& rdiagonal){
        if(row==n)
        {
            ans.push_back(board);
            return;
        }
        for(int i=0;i<n;i++)
        {
         if(ldiagonal[n-1+i-row]==0 && column[i]==0 && rdiagonal[i+row]==0)
         {
            column[i]=1;
            ldiagonal[n-1+i-row]++;
            rdiagonal[i+row]++;
            board[row][i]='Q';
            find(row+1,n,board,ans,column,ldiagonal,rdiagonal);
            ldiagonal[n-1+i-row]--;
            rdiagonal[row+i]--;
            board[row][i]='.';
            column[i]=0;
         }   
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        board[i].push_back('.');
        vector<bool> column(n,0);
        vector<int> ldiagonal(2*n-1,0);
        vector<int> rdiagonal(2*n-1,0);

        find(0,n,board,ans,column,ldiagonal,rdiagonal);
        return ans;
    }
};