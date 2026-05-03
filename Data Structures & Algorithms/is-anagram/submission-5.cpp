class Solution {
public:
    bool isAnagram(string s, string t) {

        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());

        // if (s == t){
        //     return true;
        // }

        // return false;
        
        if (s.length()!=t.length()){
            return false;

        }

        unordered_map<char, int>count1;
        unordered_map<char, int>count2;

        for (int i =0; i <s.length(); i++){
            count1[s[i]]++;
            count2[t[i]]++;
        }
        return count1 == count2;
    }
};
