class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> temp;
        for (int i = 0; i < nums.size(); i++)
        {
            temp.insert(nums[i]);
        }
        int currenthighest = 0;
        for (auto it = temp.begin(); it != temp.end(); ++it)
        {
            if (!(temp.count(*it - 1)))
            {
                int count = 0;
                int currentVal = *it;
                while (temp.count(currentVal))
                {
                    count += 1;
                    currentVal++;
                }
                count > currenthighest ? currenthighest = count : currenthighest = currenthighest;
            }
        }
        return currenthighest;
    }

};
