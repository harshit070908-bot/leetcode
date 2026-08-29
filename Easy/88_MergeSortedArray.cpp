#include <vector>
#include <algorithm>

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int i {m-1}, j {n-1}, k {m+n-1};

        while(j >= 0){
            if(i >= 0 && nums1[i] > nums2[j]){
                std::swap(nums1[k--], nums1[i--]);
            }else{
                std::swap(nums1[k--], nums2[j--]);
            }
        }
    }
};