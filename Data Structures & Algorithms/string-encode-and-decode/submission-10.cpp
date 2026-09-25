class Solution {
public:

    string encode(vector<string>& strs) {
        string out;
        for (auto it = strs.begin(); it != strs.end(); ++it)
        {
            out += to_string((*it).size());
            out += "#";
            out += *it;
        }
        return out;
    }

    vector<string> decode(string s) {
        vector<string> out;
        string temp;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '#')
            {
                temp += s[i];
                continue;
            }
            string temp2 = s.substr(i+1, stoi(temp));
            out.push_back(temp2);
            i += stoi(temp);
            temp = "";
        }
        return out;
    }
};
