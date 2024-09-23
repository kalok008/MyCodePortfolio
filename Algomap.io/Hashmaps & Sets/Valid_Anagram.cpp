class Solution {
public:
    bool isAnagram(string s, string t) {
        
      	if(s.size() != t.size()) return false;

        int a[26];
        for(int i = 0; i < s.size(); i++){
            a[s[i] - 'a']++;
        }

        for (int i = 0; i < t.size(); i++) {
            if(a[t[i] - 'a'] <= 0) return false;
            a[t[i] - 'a']--;
        }
        return true;

    }
};
