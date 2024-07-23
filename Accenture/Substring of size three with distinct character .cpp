
Leetcode problem link - https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/description/



*********************************************************************************************************
class Solution {
public:
    int countGoodSubstrings(string s) {
        int n= s.size();
        int res=0;
        if(n-1<=-1)  return 0;
        for(int i=0;i<n-2;i++){
            if(s[i]==s[i+1]||s[i+1]==s[i+2]||s[i+2]==s[i]){
                continue;
            }
            res++;

        }
        return res;
    }
};
