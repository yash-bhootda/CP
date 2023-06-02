class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l =0;
        int r = matrix.size();
        int a , b;
        while(l<r)
        {
            a = 0;
            b =matrix[l].size()-1;
            if(target>=matrix[l][0] && target<=matrix[l][b])
            {
                while(a<=b)
                {
                    int m = (a+b)/2;
                    if(matrix[l][m]==target)
                    {
                        return true;
                    }
                    else if(matrix[l][m]>target)
                    {
                        b=m-1;
                    }
                    else
                    {
                        a=m+1;
                    }
                }
            }
            l++;
        }
        return false;
    }
};