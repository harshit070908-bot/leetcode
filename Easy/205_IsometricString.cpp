#include <string>

class Solution {
public:
    bool isIsomorphic(std::string s, std::string t) {
        char sToT[128]{};
        char tToS[128]{};

        for (int i{}; i < s.size(); ++i) {
            unsigned char a = s[i];
            unsigned char b = t[i];

            if (sToT[a] == '\0' && tToS[b] == '\0') {
                sToT[a] = b;
                tToS[b] = a;
            }
            else if (sToT[a] != b || tToS[b] != a) {
                return false;
            }
        }

        return true;
    }
};