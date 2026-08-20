class Solution {
public:
    vector<vector<int>>res;
    
    vector<int>temp;
    void solve(vector<int>& candidates , int target , int indx){
        int n = candidates.size();
        if(target == 0){
            res.push_back(temp);
            return;
        }
        if(target<0 || indx>=n) return;
        temp.push_back(candidates[indx]);
        solve(candidates,target-candidates[indx],indx+1);
        temp.pop_back();
        int j = indx+1;
        while(j<n && candidates[j] == candidates[indx]) j++;
        solve(candidates,target,j);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        solve(candidates,target,0);
        return res;
    }
};