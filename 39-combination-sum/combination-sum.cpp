class Solution {
public:
    vector<vector<int>>res;
    
    vector<int>temp;
    void solve(vector<int>& candidates , int target , int indx){
        int n = candidates.size();
        if(target<0 || indx>=n) return;

        if(target == 0){
            res.push_back(temp);
            return;
        }
        temp.push_back(candidates[indx]);
        solve(candidates,target-candidates[indx],indx);

        temp.pop_back();
        solve(candidates,target,indx+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(candidates,target,0);
        return res;
    }
};