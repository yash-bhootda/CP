class Solution
{
public:
    bool calc(vector<int> piles, int k, int h)
    {
        int sum = 0;
        for (int i = 0; i < piles.size(); i++)
        {
            if (piles[i] % k != 0)
            {
                sum = sum + (piles[i] / k) + 1;
            }
            else
            {
                sum = sum + (piles[i] / k);
            }
        }
        if (sum > h)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int start = 1;
        sort(piles.begin(), piles.end());
        int end = piles[piles.size() - 1];
        while (start < end)
        {
            int mid = (end + start) / 2;
            if (calc(piles, mid, h))
            {
                end = mid;
            }
            else
            {
                start = mid + 1;
            }
        }
        return end;
    }
};