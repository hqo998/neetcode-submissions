class MinStack {
private:
    std::stack<int> m_stack;
    std::stack<int> minStack;

public:
    MinStack() {}
    
    void push(int val) {
        m_stack.push(val);
        if (minStack.empty() || val <= minStack.top()) minStack.push(val);
    }
    
    void pop() {
        if (m_stack.top() == minStack.top()) minStack.pop();
        m_stack.pop();
        
    }
    
    int top() {
        return m_stack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
