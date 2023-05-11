class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
      
        int sum=0;
        int suml=0;
        int i =0;
        if(n==1)
        {
            return 1;
        }
        while(i<n)
        {
            sum=sum+a[i];
            i++;
        }
        sum=sum-a[0];
        for(int i=0;i<n-1;i++)
        {
            suml=suml+a[i];
            sum=sum-a[i+1];
            if(suml==sum)
            {
                return i+2;
            }
        }
        return -1;
        // Your code here
    }

};
//https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article