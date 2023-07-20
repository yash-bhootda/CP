class Solution {
public:
    int count =0;
    bool safe(int row , int col , vector<string>& board , int n)
    {
        int temprow=row;
        int tempcol=col;

        while(row>=0 && col>=0)
        {
            if(board[row][col]=='Q') return false;
            row--;
            col--;
        }

        row=temprow;
        col=tempcol;

        while(col>=0)
        {
            if(board[row][col]=='Q') return false;
            col--;
        }

        row=temprow;
        col=tempcol;

        while(row<n && col>=0)
        {
            if(board[row][col]=='Q') return false;
            row++;
            col--;
        }

        return true;
    }
    void solve(int col , vector<string> &board , int n)
    {
        if(col==n)
        {
            count++;
            return;
        }

        for(int row =0;row<n;row++)
        {
            if(safe(row , col , board , n))
            {
                board[row][col]='Q';
                solve(col+1 , board , n);
                board[row][col]='.';
            }
        }
    }
    int totalNQueens(int n) {
        vector<string> board(n);
        string s (n , '.');
        for(int i =0;i<n;i++)
        {
            board[i]=s;
        }
        solve(0,board , n);

        return count;
    }
};