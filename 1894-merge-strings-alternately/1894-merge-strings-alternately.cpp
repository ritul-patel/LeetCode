class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.length();
        int n2 = word2.length();
        string s;
        for(int i = 0 ;i < max(n1,n2) ; i++){
            if(n1>i)s += word1[i];
            if(n2>i)s += word2[i]; 
        }
        return s;
    }
};