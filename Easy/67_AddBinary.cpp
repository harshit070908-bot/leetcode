#include <string>

class Solution {
public:
    std::string addBinary(std::string a, std::string b) {
        std::string result {};

        int s1 = a.length() - 1;
        int s2 = b.length() - 1;

        char carry {'0'};

        while(s1 >= 0 && s2 >= 0){
            if(a[s1] == '0' && b[s2] == '0'){
                if(carry == '0'){
                    result.push_back('0');
                }else{
                    result.push_back('1');
                    carry = '0';
                }
            }else if((a[s1] == '1' && b[s2] == '0') || (a[s1] == '0' && b[s2] == '1')){
                if(carry == '0'){
                    result.push_back('1');
                }else{
                    result.push_back('0');
                }
            }else{
                if(carry == '0'){
                    result.push_back('0');
                    carry = '1';
                }else{
                    result.push_back('1');
                }
            }
            s1--;
            s2--;
        }

        while(s1 >= 0){
            if(carry == '0'){
                result.push_back(a[s1]);
            }else{
                if(a[s1] == '1'){
                    result.push_back('0');
                }else{
                    result.push_back('1');
                    carry = '0';
                }
            }
            s1--;
        }
        while(s2 >= 0){
            if(carry == '0'){
                result.push_back(b[s2]);
            }else{
                if(b[s2] == '1'){
                    result.push_back('0');
                }else{
                    result.push_back('1');
                    carry = '0';
                }
            }
            s2--;
        }

        if(carry == '1') result.push_back('1');

        return {result.rbegin(), result.rend()};
    }
};