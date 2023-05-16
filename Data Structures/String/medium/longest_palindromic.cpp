class Solution {
public:
    int checkpal(int l , int r , string s )
    {
        while(l>=0 && r<s.size() && s[l]==s[r])
        {
            l--;
            r++;
        }
        return r-l-1;
    }
    string longestPalindrome(string s) {
        /*int n = s.size();
        if(n==1)
        {
            return s;
        }
        int start;
        int maxcount=1;
        vector<vector<bool>> v ( n , vector<bool> (n,false));
        for(int i =0;i<n;i++)
        {
            v[i][i]=true;
        }
        for(int i =0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                v[i][i+1]=true;
                start=i;
                maxcount=2;
                
            }
        }
        for(int k =3;k<=n;k++)
        {
            for(int i =0;i<n-k+1;i++)
            {
                int j = i+k-1;
                if(s[i]==s[j] && v[i+1][j-1]==true)
                {
                    v[i][j]=true;
                    if(k>maxcount)
                    {
                        start=i;
                        maxcount=k;
                    }
                    
                }
            }
        }
        cout<< start<<" " << maxcount<<endl;
        string t = s.substr(start , maxcount);
        return t;*/ 
        int maxl=1;
        int start=0;
        int n =s.size();
        for(int i =0;i<n-1;i++)
        {
            int n = checkpal(i,i,s);
            int m = checkpal(i,i+1,s);
            int ans = max(n,m);
            if(ans>maxl)
            {
                maxl=ans;
                start=i-(maxl-1)/2;
            }
        }
        string t = s.substr(start , maxl);
        return t;

        
    }
};