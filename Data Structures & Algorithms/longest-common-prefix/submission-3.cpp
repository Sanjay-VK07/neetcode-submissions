class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.empty()) return "";
        string res = "";

        for(int c=0; c<strs[0].size(); c++){
             char f = strs[0][c];
            for(int i=1; i<strs.size(); i++){
               
                if( c>=strs[i].size() || strs[i][c] != f){
                    return res;
                }

            }
             res+=f;
        }
        return res;

    }
};