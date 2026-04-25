class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for(auto &it :strs){
            vector<string> result;
           int freq[26]={0};
          string key="";
           for(auto s:it){
            freq[s-'a']++;
           }
           for(auto k:freq){
            key=key+to_string(k);
            key+="#";

           }
           if(mp.contains(key)){
            mp[key].push_back(it);
           }
           else{
            result.push_back(it);
            mp.insert({key,result});
           }
           result.clear();

        }
        vector<vector<string>> r;
        for(auto &i:mp){
            r.push_back(i.second);
        }
        return r;
        
        
    }
};
