class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        for(int i=0; i<nums.size(); i++){
            int index = nums[i]-1;
                
                if(nums[i] > 0 && nums[i]<=nums.size()){
                    if(nums[i]!=nums[index]){
                        int temp = nums[i];
                        nums[i] = nums[index];
                         nums[index] = temp;

                       
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