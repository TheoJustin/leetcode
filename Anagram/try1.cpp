class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26] = {0};
        int tarr[26] = {0};

        if(s.size() != t.size()){
            return false;
        }

        for(int i = 0; i<s.size(); i++){
            arr[s[i]-97]++;
            tarr[t[i]-97]++;
        }

        for(int i = 0; i<26; i++){
            if(arr[i] != tarr[i]){
                return false;
            }
        }
        return true;
    }
};