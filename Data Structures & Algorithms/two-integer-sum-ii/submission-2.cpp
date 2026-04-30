class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0;
        int r=numbers.size()-1;
        vector<int> result;
        while(r<numbers.size() ){
            if((numbers[l]+numbers[r])==target  && l<r){
                result.push_back(l+1);
                 result.push_back(r+1);
                 return result;

            }
          if((numbers[l]+numbers[r])>target){
            r--;
          }
          else{
            l++;
          }
            

        }
        return result;
    }
};
