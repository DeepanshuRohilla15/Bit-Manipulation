class Solution {
public:
    int xorOperation(int n, int start) {
       int i, hold = start;
    for (int i = 0; i < n - 1; ++i) {
        hold = hold ^ (start + 2);
        start += 2;
    }
    return hold;
    }
};