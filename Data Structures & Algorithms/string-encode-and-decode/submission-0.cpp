class Solution {
public:

    string encode(vector<string>& strs) {
            string s = "";

            for(string x : strs){
                s+=to_string(x.length());
                s+='#';
                s+=x;
            }
            return s;
    }

    vector<string> decode(string s) {
            vector<string>ans;

            int i=0;
            while(i<s.size()){
                string len = "";
                while(s[i]!='#'){
                    len+=s[i];
                    i++;
                }
                int length = stoi(len);
                i++;
                string word = s.substr(i,length);
                i+=length;
                ans.push_back(word);
            }
            return ans;
    }
};
