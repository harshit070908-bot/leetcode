#include <string>

class Solution {
public:
    bool hasMatch(std::string s, std::string p) {
        int star = p.find('*');

        std::string first = p.substr(0, star);
        std::string second = p.substr(star + 1);

        int a = s.find(first);

        if(a == std::string::npos)
            return false;

        int b = s.find(second, a + first.length());

        return b != std::string::npos;
    }
};