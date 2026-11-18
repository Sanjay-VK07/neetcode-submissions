class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        for(int i=0; i<nums.size(); i++){
            int index = nums[i]-1;
                
                if(nums[i] > 0 && nums[i]<=nums.size()){
                    if(nums[i]!=nums[index]){
                        swap(nums[i],nums[index]);
                        i--;
                    }
                } 


        }
    
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != i+1){
                
                return i+1;
            }
        }
        return nums.size()+1;
    }
};