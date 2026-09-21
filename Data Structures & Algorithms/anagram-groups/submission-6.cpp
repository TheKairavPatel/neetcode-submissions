class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mapper;
        for (auto it = strs.begin(); it != strs.end(); ++it)
        {
            int king[26] = {0};
            for (auto it2 = (*it).begin(); it2 != (*it).end(); ++it2)
            {
                king[*it2 - 97]++;
            }
            string key{};
            for (int i = 0; i < 26; i++)
            {
                key += to_string(king[i]);
                key += ",";
            }
            mapper[key].push_back(*it);

        }
        vector<vector<string>> output{};
        for (auto &[key, strings] : mapper)
        {
            output.push_back(strings);
        }
        return output;
    }
};
