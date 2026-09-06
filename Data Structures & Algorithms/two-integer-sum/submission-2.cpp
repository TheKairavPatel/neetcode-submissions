class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++)
        {
            int difference = target - nums[i];
            if (hash.contains(difference))
            {return std::vector({hash[difference], i});}
            hash[nums[i]] = i;

        }
    }};

