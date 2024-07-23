// class Solution {
// public:
//     int minMoves2(vector<int>& nums) {
//         int mini = INT_MAX;
//         for(int i=0; i<nums.size(); i++){
//             int total = 0;
//             for(int j=0; j<nums.size(); j++){
//                 total += abs(nums[j] - nums[i]);
//             }
//             mini = min(mini, total);
//         }
//         return mini;
//     }
// };
class Solution {
public:
    int minMoves2(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int mid = nums[nums.size()/2];
        int ans = 0;
        for(auto val:nums)
            ans += abs(mid - val);
        return ans;
    }
};