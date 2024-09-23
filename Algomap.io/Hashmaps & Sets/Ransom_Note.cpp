class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> hashmap;

        for(char ch : magazine){
            hashmap[ch]++;
        }

        for(char ch : ransomNote){
            if(hashmap[ch] > 0){
                hashmap[ch]--;
            }else{
                return false;
            }
        }

        return true;
    }
};