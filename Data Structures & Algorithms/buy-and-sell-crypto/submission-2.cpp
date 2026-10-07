class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currentMin = prices[0];
        int maxProf = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] < currentMin)
            {
                currentMin = prices[i];
                continue;
            }
            int tempProf = prices[i] - currentMin;
            if (tempProf > maxProf)
            {
                maxProf = tempProf;
            }


        }
        return maxProf;
    }
};
