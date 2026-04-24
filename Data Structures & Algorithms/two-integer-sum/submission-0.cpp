class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            if (mp.contains(target - nums[i])) {
                result.push_back(mp[target - nums[i]]);
                result.push_back(i);

                return result;
            } else {
                mp.insert({nums[i], i});
            }
        }
        return result;
    }
};
