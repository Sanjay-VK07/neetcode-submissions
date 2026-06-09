class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>freq;
        vector<vector<int>>bucket(n+1);
        vector<int>res;

        for(int x : nums){
              freq[x]++;
        }
        
        for(auto &c : freq){
              int firstt = c.first;
              int cnt = c.second;
              bucket[cnt].push_back(firstt);
        }
        for(int i=n; i>=1; i--){
            for(int j=0; j<bucket[i].size(); j++)
              
                res.push_back(bucket[i][j]);
              if(res.size()==k){
                return res;
              }  
        }
        return {};
    }                       
};
