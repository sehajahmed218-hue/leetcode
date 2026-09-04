class Solution {
    int ans=0;
public:
    void find(int row,int n,vector<bool>& ldiagonal,vector<bool>& rdiagonal,vector<bool>& column)
    {
        if(row==n){
            ans++;
          return;
        }
        
        for(int i=0;i<n;i++)
        {
            if(ldiagonal[n-1+i-row]==0 && rdiagonal[i+row]==0 && column[i]==0)
            {
                ldiagonal[n-1+i-row]=1;
                rdiagonal[i+row]=1;
                column[i]=1;
                find(row+1,n,ldiagonal,rdiagonal,column);
                ldiagonal[n-1+i-row]=0;
                rdiagonal[i+row]=0;
                column[i]=0;
            }
            
        }
        return;
    }
    int totalNQueens(int n) {
        vector<bool> ldiagonal(2*n-1,0);
        vector<bool> rdiagonal(2*n-1,0);
        vector<bool> column(n,0);
        find(0,n,ldiagonal,rdiagonal,column);
        return ans;
    }
};