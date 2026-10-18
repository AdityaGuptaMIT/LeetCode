class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix ="" ;
        int i, j ;

        for (j=0 ; j<strs[0].size() ; j++) {

            char pre = strs[0][j] ;
            int temp = 0 ;

            for (i=0 ; i<strs.size() ; i++) {

                if (j < strs[i].length()) {
                    if (strs[i][j] == pre) {
                        temp = 1 ;
                    }
                    else {
                        temp = 0 ;
                        break ;
                    }
                }
                else{
                    temp = 0 ;
                    break ;
                }
            }

            if (temp == 1) {
                prefix += pre ;
            }
            else {
                return prefix ;
            }
        }
        return prefix ;
    }
};