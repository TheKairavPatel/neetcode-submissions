#include <stack>

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    {
        stack<int> king;
        vector<int> out(temperatures.size());
        for (int i = 0; i < temperatures.size(); i++)
        {
            if (king.empty())
            {
                king.push(i);
                continue;
            }
            while (temperatures[king.top()] < temperatures[i])
            {
                out[king.top()] = i - king.top();
                king.pop();
                if (king.empty()) {break;}
            }
            king.push(i);

        }
        return out;
    }
};
