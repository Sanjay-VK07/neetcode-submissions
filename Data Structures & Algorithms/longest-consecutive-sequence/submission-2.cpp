class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
            unordered_set<int>seen;

            for(int x : nums){
                seen.insert(x);
            }

        int cnt = 0,res = 0; 
        
       for(auto c : seen){
            

            if(seen.find(c-1) == seen.end()){
                    int val = c;
                    cnt = 1;
                    
            while(seen.find(val+1)!=seen.end()){
                  val++;
                   cnt++;
            }
            }
        
            res = max(res,cnt);
        }
        return res;

    }
};