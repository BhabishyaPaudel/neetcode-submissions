class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        vector<int> sf;
        unordered_set<int> mp;
        for(int i:nums){
            mp.insert({i});
        }
        for(int i:nums){
            if(mp.contains(i-1)){
                continue;
            }
            else{
                sf.push_back(i);
            }
        }
        int maxs=1;
        for(int i:sf){
            int tempmaxs=1;
            while(mp.contains(i+1)){
                tempmaxs++;
                i++;
               
            }
             if(tempmaxs>maxs){
                    maxs=tempmaxs;
                }
        }
        return maxs;
    }
};
