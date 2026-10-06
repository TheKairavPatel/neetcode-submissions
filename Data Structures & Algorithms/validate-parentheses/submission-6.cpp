#include <stack>

class Solution {

public:
    bool isValid(string s) {
        std::stack<char> temp;
        temp.push(s[0]);
        for (int i = 1; i < s.size(); i++)
        {
            if (temp.empty()) {temp.push(s[i]); continue;}
            if ((s[i] == ')') && (temp.top() == '('))
            {
                temp.pop();
                continue;
            }
            else if ((s[i] == ']') && (temp.top() == '['))
            {
                temp.pop();
                continue;
            }
            else if ((s[i] == '}') && (temp.top() == '{'))
            {
                temp.pop();
                continue;
            }
            temp.push(s[i]);
        }
        if (!temp.empty())
        {
            return false;
        }
        return true;
    }
};
