class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {

     for(int i=0; i<nums.size()-1; i++){
        bool sw = false;

        for(int j=0; j<nums.size()-i-1; j++){
            if(nums[j] > nums[j+1]){
                int tem = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = tem;
                sw = true;
            }

        }
        if(!sw){
                break;
            }
     }

     return nums;  
    }
};