#include <string>

class Solution {
public:
    bool judgeCircle(std::string moves) {
        int x {};
        int y {};

        for(int i {}; i < moves.size(); i++){
            if(moves[i] == 'U'){
                y--;
            }else if(moves[i] == 'D'){
                y++;
            }else if(moves[i] == 'L'){
                x--;
            }else{
                x++;
            }
        }

        return (!x && !y);
    }
};