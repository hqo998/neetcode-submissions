class MinStack {
private:
    int* m_data;
    std::size_t m_size;
    std::size_t m_capacity;
    std::stack<int> minStack;

public:
    MinStack() : m_data{nullptr}, m_size{0}, m_capacity{0} {
    }
    
    void push(int val) {
        if (m_size == m_capacity) {
            std::size_t new_capacity{(m_capacity == 0) ? 1 : m_capacity * 2};
            int* new_data{new int[new_capacity]};
            for (std::size_t i{0}; i < m_size; ++i) {
                new_data[i] = m_data[i];
            }
            delete[] m_data;
            m_data = new_data;
            m_capacity = new_capacity;
        }
        m_data[m_size] = val;

        if (minStack.empty() || val <= minStack.top()) minStack.push(val);

        ++m_size;
    }
    
    void pop() {
        if (m_data[m_size - 1] == minStack.top()) minStack.pop();
        --m_size;
    }
    
    int top() {
        return m_data[m_size - 1];
    }
    
    int getMin() {
        return minStack.top();
    }
};
