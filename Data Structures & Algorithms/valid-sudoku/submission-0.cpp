class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i=0; i<9; i++){
            bool seen[9] = {false};
            for(int j=0; j<9; j++){

                    if(board[i][j] == '.') continue;

                    int val = board[i][j] - '1';

                    if(seen[val]) return false;


                    seen[val] = true;


                    

        }
        }


        for(int i=0; i<9; i++){
            bool seen[9] = {false};
            for(int j=0; j<9; j++){

                    if(board[j][i] == '.') continue;

                    int val = board[j][i] - '1';

                    if(seen[val]) return false;


                    seen[val] = true;

            
                    

        }
        }

        for(int start = 0; start<9; start++){
            bool seen[9] = {false};

            int roww = (start/3) * 3;
            int coll = (start%3) * 3;


            for(int i = roww; i<roww+3; i++){
                for(int j = coll; j<coll+3; j++){
                        if(board[i][j] == '.') continue;

                          int num = board[i][j] - '1';

            if(seen[num]) return false;

            seen[num] = true;
                }
            }




        }
        return true;
    }
};
