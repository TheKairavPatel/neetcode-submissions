class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> out{};
        unordered_map<int, int> count;
        for (int i = 0; i < nums.size(); i++)
        {
            count[nums[i]] += 1;
        }
        vector<vector<int>> a(nums.size()+ 1);
        for (auto& [x, y] : count)
        {
            a[y].push_back(x);
        }
        for (auto it = a.rbegin(); it != a.rend(); ++it)
        {
            if ((*it).empty()) {continue;}
            for (auto it2 = (*it).begin(); it2 != (*it).end(); ++it2)
            {
                if (out.size() == k) {return out;}
                out.push_back(*it2);
            }




            
        }
        return out;
    }   
};
