int solve(vector<int>& rooms, int target) {
    for (int num: rooms) {
        if (num >= target) return num;
    }

    return -1;
}