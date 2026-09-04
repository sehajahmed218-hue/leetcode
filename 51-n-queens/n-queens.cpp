class Solution {
public:
    bool isvalid(int i,int n,vector<string>& board,int j)
    {
        int row=i;
        int column=j;
        while(row>-1 && column>-1)
        {
            if(board[row][column]=='Q')
                return 0;
            row--;column--;
        }
        row=i;
        column=j;
        while(row>-1 && column<n)
        {
            if(board[row][column]=='Q')
                return 0;
            row--;column++;
        }
        return 1;
    }
    void find(int row,int n,vector<string>& board,vector<vector<string>>& ans,vector<bool>& column){
        if(row==n)
        {
            ans.push_back(board);
            return;
        }
        for(int i=0;i<n;i++)
        {
         if(isvalid(row,n,board,i) && column[i]==0)
         {
            column[i]=1;
            board[row][i]='Q';
            find(row+1,n,board,ans,column);
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
        find(0,n,board,ans,column);
        return ans;
    }
};