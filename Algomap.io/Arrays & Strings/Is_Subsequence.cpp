class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s==""){
            return true;
        }
        int S = s.length();
        int T = t.length();
        if(S>T){
            return false;
        }

        int j = 0;
        for(int i=0; i<T; i++){
            if(s[j]==t[i]){
                j++;
                if(j==S){
                    return true;
                }
            }
        }
        return false;
    }
};
