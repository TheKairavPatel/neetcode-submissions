class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        vector<int> out(2);
        int start = 0;
        int end = numbers.size() - 1;
        while (start < end)
        {
            if (numbers[start]+ numbers[end] == target)
            {
                out[0] = start + 1;
                out[1] = end + 1;
                return out;
            }
            else if (numbers[start]+ numbers[end] < target)
            {
                start++;
                continue;
            }
            else
            {
                end--;
                continue;
            }
        }
        return out;
        
    }
};
