class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mpp;
        for(string s : strs){
            string old_s = s;
            sort(old_s.begin(),old_s.end());
            string key = old_s;
            mpp[key].push_back(s);
        }
        for(auto it : mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};