class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>>freq;
        vector<vector<string>>ans;
            
       for(int i=0; i<strs.size(); i++){
                string temp = strs[i];
                sort(temp.begin(),temp.end());

                freq[temp].push_back(strs[i]);
       }
       for(auto p : freq){
           ans.push_back(p.second);
       }
       return ans;
          
    }
};
