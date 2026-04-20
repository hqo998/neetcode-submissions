class Solution {
public:
    bool isPalindrome(string s) {
        int a{0};
        int b{static_cast<int>(s.length() - 1)};

        // s = 

        while (a < b) {
            if (!isalnum(s[a])) {
                a++;
                continue;
            }

            if (!isalnum(s[b])) {
                b--;
                continue;
            }

            std::cout << s[a] << s[b] << "\n";
            if (tolower(s[a]) != tolower(s[b])) return false;
            
            a += 1;
            b -= 1;
        }
        return true;
    }
};
