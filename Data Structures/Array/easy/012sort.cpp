class Solution
{
    public:
    void sort012(int a[], int n)
    {
        unordered_map<int , int> mp;
        for(int i =0;i<n;i++)
        {
            mp[a[i]]++;
        }
        int c1=mp[0];
        int c2=mp[1];
        int c3=mp[2];
        int i =0;
        while(c1)
        {
            a[i]=0;
            i++;
            c1--;
        }
        while(c2)
        {
            a[i]=1;
            i++;
            c2--;
        }
        while(c3)
        {
            a[i]=2;
            i++;
            c3--;
        }
        // code here 
    }
    
};