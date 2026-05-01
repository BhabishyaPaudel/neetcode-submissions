class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for(string i:strs){
            s+=i;
            s+= to_string(i.size()%10)+"#";
        }
        return s;

    }

    vector<string> decode(string s) {
      
        string word="";
        vector<string> re;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i]) &&(i+1<s.size() && s[i+1]=='#')){
                re.push_back(word);
                word="";
                i++;
                
            }
            else{
                
                    word+=s[i];
               
            }
        }
        return re;

    }
};
