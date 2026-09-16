#include <stack>

class MinStack {
protected:
    std::stack<int> values;
    std::stack<int> minValues;

public:
    MinStack() {
        
    }
    
    void push(int value) {
        values.push(value);
        if(minValues.empty()){
            minValues.push(value);
            return;
        }
        minValues.push(std::min(minValues.top(), value));
    }
    
    void pop() {
        values.pop();
        minValues.pop();
    }
    
    int top() {
        return values.top();
    }
    
    int getMin() {
        return minValues.top();
    }
};