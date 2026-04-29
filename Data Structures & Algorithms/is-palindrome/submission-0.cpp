class Solution {
public:
    bool isPalindrome(string s) {
       string ns="";
        for(char ch:s){
            if(isalnum(ch)){
                       ns+=tolower(ch);
         
            }
        }
      
        int l=0;
        int r=ns.size()-1;
        while(!(r<l)){
            if(ns[l]!=ns[r]){
                return  false;

            }
            r--;
            l++;
        }
        return  true;
        
    }
};
