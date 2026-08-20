/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

int guess(int num); // dummy function

class Solution {
public:
    int guessNumber(int n) {
        int left {};
        int right {n};
        while(1){
            int mid {left + (right - left) / 2};
            int result {guess(mid)};
            if(result == -1)
                right = mid - 1;
            else if(result)
                left = mid + 1;
            else if(!result)
                return mid;
        }
    }
};