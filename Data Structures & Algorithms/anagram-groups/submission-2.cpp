class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<int>>freq;
            
    for(auto x=0; x<strs.size(); x++){
        string temp = strs[x];
        sort(temp.begin(),temp.end());

        freq[temp].push_back(x);

        }
        vector<vector<string>>res;

        for(auto it : freq){
            vector<string>temp;

            int i= 0;
            while(i<it.second.size()){
                temp.push_back(strs[it.second[i]]);
                i++;
            }
            res.push_back(temp);
        }

    return res;


    }
};
