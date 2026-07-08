class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++)
        {
            int temp = nums[i];
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[j] == temp && i != j)
                    return true;
            }
        }
        return false;
    }
};