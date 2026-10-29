class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int,int>index;

        for(int i=0; i<nums.size(); i++){
           

            int dif = target-nums[i];
            
            if(index.find(dif)!=index.end()){
                return {index[dif],i};
            }
            index[nums[i]] = i;

        }
        return {};
    }
};
