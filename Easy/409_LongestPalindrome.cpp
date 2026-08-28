#include <string>
#include <vector>

class Solution {
public:
    int longestPalindrome(std::string s) {
        std::vector<int> v(128, 0) ;

        for(auto i : s) v.at(i)++;

        int result {};

        for(auto i : v) if (i >= 2) result += (i%2 == 0) ? i : i-1;

        return (result == s.size()) ? result : result + 1;
    }
};