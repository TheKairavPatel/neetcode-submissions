class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> out;
        unordered_map<int, int> hash;
        for (int i = 0; i < numbers.size(); i++)
        {
            int diff = target - numbers[i];
            if ((hash.find(diff) != hash.end()))
            {
                out.push_back(i + 1);
                if (i < hash[diff])
                {
                    out.push_back(hash[diff] + 1);
                }
                else
                {
                    out.insert(out.begin(), hash[diff] + 1);
                }
                return out;
            }
            hash[numbers[i]] = i;

        }
    }
};
