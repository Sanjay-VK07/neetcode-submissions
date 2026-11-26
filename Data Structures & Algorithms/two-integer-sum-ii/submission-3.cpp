class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
           int i=0,j=numbers.size()-1;
            
           while(i<j){
            
            int need = target - numbers[i];

            if(numbers[j] == need){
                return {i+1,j+1};
            }else if(need<numbers[j]){
                j--;
            } else{
                i++;
            }
              
              
            
           }
           return {};
    }
};
