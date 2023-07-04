class Solution
{
public:
    int minimumDeviation(vector<int> &nums)
    {

        int min1 = INT_MAX;
        priority_queue<int> pq;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 != 0)
            {
                nums[i] = nums[i] * 2;
            }
            min1 = min(min1, nums[i]);
            pq.push(nums[i]);
        }

        int deviation = INT_MAX;

        while (!pq.empty())
        {
            int temp = pq.top();
            pq.pop();

            deviation = min(deviation, temp - min1);

            if (temp % 2 != 0)
                break;

            min1 = min(min1, temp / 2);

            pq.push(temp / 2);
        }
        return deviation;
    }
};
boi