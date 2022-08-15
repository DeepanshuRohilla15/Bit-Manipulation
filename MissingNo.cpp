#include<bits/stdc++.h>
using namespace std;
int main()
{
return 0;
}
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0;
        for(int i = 0 ; i<= nums.size(); i++){
            ans = ans^i;                          // Upto n elements ka xor
        }
        for(auto x : nums){
            ans = ans^x;               // Upto n ke saath nums ke element ka xor
        }
        return ans;
    }
};