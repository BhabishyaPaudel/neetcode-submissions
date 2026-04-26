class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (auto& s : nums) { // For creating the unordered map 
            if (mp.contains(s)) {
                mp[s]++;

            } else {
                mp.insert({s, 1});
            }
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        for (auto& s : mp) {
            pq.push({s.second, s.first});

            if (pq.size() > k) {
                pq.pop();
            }
        }
        vector<int> res;
        for (int i = 0; i < k; i++) {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
