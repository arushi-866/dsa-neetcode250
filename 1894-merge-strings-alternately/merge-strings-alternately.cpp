class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int a=word1.length();
        int b=word2.length();

        string ans="";
        int left=0;
        int right=0;

        while(left<a && right<b){
            ans+=word1[left];
            ans+=word2[right];
            left++;
            right++;
        }
        while(left<word1.size()){
            ans+=word1[left];
            left++;
        }
        while(right<word2.size()){
            ans+=word2[right];
            right++;
        }
        return ans;
    }
};