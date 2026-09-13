class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int>freq1;
        for(char ch:s){
            freq1[ch]++;
        };
        unordered_map<char,int>freq2;
        for(char ch:t){
            freq2[ch]++;
        };
        return freq1==freq2;
    }
};