#include <stack>

class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
        std::stack<int> king;
        for(int i = 0; i < tokens.size(); i++)
        {
            std::string temp = tokens[i];
            if (temp == "*")
            {
                int num1 = king.top();
                king.pop();
                int num2 = king.top();
                king.pop();
                king.push(num1*num2);
            }
            else if (temp == "/")
            {
                int num1 = king.top();
                king.pop();
                int num2 = king.top();
                king.pop();
                king.push(num2/num1);
            }
            else if (temp == "+")
            {
                int num1 = king.top();
                king.pop();
                int num2 = king.top();
                king.pop();
                king.push(num1+num2);
            }
            else if (temp == "-")
            {
                int num1 = king.top();
                king.pop();
                int num2 = king.top();
                king.pop();
                king.push(num2-num1);
            }
            else 
            {
                king.push(stoi(temp));
            }




        }
        return king.top();
    }
};
