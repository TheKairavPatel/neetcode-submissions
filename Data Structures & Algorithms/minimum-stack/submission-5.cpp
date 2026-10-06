#include <stack>
class MinStack {
public:
    MinStack() 
    {
    }
    
    void push(int val) 
    {
        _data.push_back(val);
        if (mins.empty() || val <= mins.back())
        {
            mins.push_back(val);
        }
    }
    
    void pop() 
    {
        if (_data.empty()) {return;}

        if (_data.back() == mins.back())
        {
            mins.pop_back();
        }
        _data.pop_back();
    }
    
    int top() 
    {
        if (_data.empty()) {return 0;}
        return _data.back();
    }
    
    int getMin() 
    {
        return mins.back();
    }
private:
    std::vector<int> _data;
    std::vector<int> mins;
};
