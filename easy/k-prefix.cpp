// Link to problem - https://binarysearch.com/problems/K-Prefix
// status - not accepted ❌

#include "vector.h";

int solve(vector<int>& nums, int k) {
    int i = -1;
    int total = 0;

    if (nums.size() == 0) return i;
    if (nums.size() == 1) return 0;

    for (int num : nums) {
        if (total + num > k) {
            return i;
        }
        total += num;
        i++;
    }

    return i;
}