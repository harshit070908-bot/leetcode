#include <stack>
#include <string>

class Solution {
public:
    bool isValid(std::string s) {
        if(s.size() % 2 == 1) return 0;

        std::stack<char> st;

        std::string opening {"([{"};

        for(char c : s){
            if(opening.find(c) != std::string::npos){
                st.push(c);
                continue;
            }
            if(st.empty()) return 0;
            if(c == ')' && st.top() == '('){
                st.pop();
            }else if(c == '}' && st.top() == '{'){
                st.pop();
            }else if(c == ']' && st.top() == '['){
                st.pop();
            }else{
                return 0;
            }
        }
        return st.empty();
    }
};