#include <string>

class Solution {
public:
    bool rotateString(std::string s, std::string goal) {
        if(s.size() != goal.size()) return 0;

        int size = s.size();
        if(size == 1) return (s[0] == goal[0]) ? 1 : 0;

        if((s + s).find(goal) != std::string::npos) return 1;
        return 0;
    }
};