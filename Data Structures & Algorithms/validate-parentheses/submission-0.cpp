class Solution {
public:
    bool isValid(string s) {
        std::stack<char> p;

        for (char c : s) {

            if (c == '[' || c == '(' || c == '{') {
                p.push(c);
                continue;
            }

            if (p.empty()) return false;
        
            if ( c == ']' && p.top() != '[') return false;
            if ( c == ')' && p.top() != '(') return false;
            if ( c == '}' && p.top() != '{') return false;

            p.pop();
        }

        return p.empty();
    }
};
