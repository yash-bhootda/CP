
int solve(int index ,int day , vector<vector<int>>& points , vector<vector<int>>& dp)
{
    if(dp[day][index]!=-1)
    {
        return dp[day][index];
    }

    if(day==0)
    {
        int max1=0;
        for(int i =0;i<3;i++)
        {
            if(i!=index)
            {
                max1=max(points[day][i] , max1);
            }

        }
        return dp[day][index]=max1;
    }
    int maxi=0;
    
    for(int task=0;task<3;task++)
    {
        if(task!=index)
        {
            int point = points[day][task] + solve(task , day-1 , points , dp);
            maxi=max(maxi , point);

        }

    }
    return dp[day][index]=maxi;
}

int solvetab(int days , vector<vector<int>>& points)
{
    vector<vector<int>> dp ( days , vector<int>(4 , -1));
    dp[0][0] = max(points[0][1] , points[0][2]);
    dp[0][1] = max(points[0][0] , points[0][2]);
    dp[0][2] = max(points[0][1] , points[0][0]);
    dp[0][3] = max(points[0][1] , max(points[0][0] , points[0][2]));
    
    for(int day = 1 ; day<days ;day++)
    {
        for(int last =0;last<4;last++)
        {
            dp[day][last]=0;
            for(int task =0;task<=2;task++)
            {
                if(task!=last)
                {
                    int activity = points[day][task] + dp[day - 1][task];
                    dp[day][last] = max(dp[day][last], activity);
                    //dp[day][last]=max(dp[day][last] , points[day][task] + dp[day-1][task]);
                }
            }
        }
    }
    return dp[days - 1][3];
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    vector<vector<int>> dp ( n , vector<int>(4 , -1)); 
    //return solve(3 , n-1 , points , dp);
    return solvetab(n , points);

}
