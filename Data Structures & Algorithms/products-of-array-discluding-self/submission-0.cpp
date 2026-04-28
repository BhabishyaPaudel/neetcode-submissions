class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> result;
        int pre=1;
        int post=1;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                result.push_back(pre);

            }
            else{
                pre=pre*nums[i-1];
                result.push_back(pre);
            }
        }
             for(int i=nums.size()-1;i>=0;i--){
            // if(i==(nums.size()-1)){
            //     post=nums[i];
            //    result[i]=result[i]*post;

            // }
            // else{
                result[i]=result[i]*post;
                post=post*nums[i];
            // }
        }
        
return result;
    }
};
