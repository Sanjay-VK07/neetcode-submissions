class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int>freq;

        for(auto x : nums){
            freq[x]++;
        }

        vector<pair<int,int>>ar(freq.begin(),freq.end());

        sort(ar.begin(),ar.end(),[](auto a,auto b){
             return a.second>b.second;
        });
vector<int>ans;
        for(int i=0; i<k; i++){
              ans.push_back(ar[i].first);
        }
        return ans;
    }
};