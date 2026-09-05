class Solution {
public:
    bool flag=0;
    int row[4]={1,-1,0,0};
    int col[4]={0,0,1,-1};
    bool isvalid(int i,int j,vector<vector<char>>& board)
    {
        return i>-1 && j>-1 && i<board.size() && j<board[0].size();
    }
    void search(vector<vector<char>>& board,string& word,int i,int j,vector<vector<bool>>& visited,int n)
    {
        if(n == word.size()-1)
        {
            flag=1;
            return ;
        }
        
        for(int k=0;k<4;k++)
        {
            if(flag==1)
                break;
            if(isvalid(i+row[k],j+col[k],board) && !visited[i+row[k]][j+col[k]] && board[i+row[k]][j+col[k]]==word[n+1])
            {
                visited[i+row[k]][j+col[k]] = 1;
                search(board,word,i+row[k],j+col[k],visited,n+1);
                visited[i+row[k]][j+col[k]]=0;
            }
        }
        

    }
    void check(int i,int j,vector<vector<char>>& board,string& word,vector<vector<bool>>& visited)
    {
        if((i>=board.size())||flag)
        {
            return;
        }
        if(board[i][j]==word[0])
        {
            visited[i][j]=1;
            search(board,word,i,j,visited,0);
            visited[i][j]=0;
        }
        if(j+1<board[i].size())
        {
            check(i,j+1,board,word,visited);
        }
        else
        {
            check(i+1,0,board,word,visited);
        }

    }
    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<bool>> visited(board.size(),vector<bool>(board[0].size(),0));
        
        check(0,0,board,word,visited);
        
        return flag;
    }
};