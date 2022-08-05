// Link to problem - https://binarysearch.com/problems/Run-Length-Encoding
// Status - Not accepted ❌

vector<int> solve(vector<int>& nums) {
    if (!nums.size()) return nums;

    sort(nums.begin(), nums.end());
    int prev = nums[0];

    for (int i=1;i<nums.size(); i++) {
        if (nums[i] != prev) {
            prev = nums[i];
            nums.erase(nums.begin()+(i-1));
        }

        if (i == nums.size()-1 && nums[i] == prev) {
            nums.erase(nums.begin()+(i-1));
        } 
    }
    
    return nums;
}