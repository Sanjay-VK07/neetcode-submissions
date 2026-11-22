class Solution {
public:

        bool check(string &s, int i, int j){
                    if(i>=j) return true;


            if(s[i]!=s[j]) return false;

            if(s[i] == s[j])
           return     check(s,i+1,j-1);
            
           

        }
    bool validPalindrome(string s) {
        
        int i=0,j=s.size()-1;

        while(i<j){
            if(s[i]!=s[j]){
                return (check(s,i+1,j) || check(s,i,j-1));
            }
            i++;
            j--;

        }
     return true;
    }
};