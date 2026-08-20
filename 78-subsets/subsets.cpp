class Solution {
public:
    vector<vector<int>>res;
    vector<int>temp;

    void solve(vector<int>& nums , int indx){
        int n = nums.size();
        if(indx == n){
            res.push_back(temp);
            return;
        }

        temp.push_back(nums[indx]);
        solve(nums,indx+1);

        temp.pop_back();
        solve(nums,indx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        solve(nums,0);
        return res;
    }
};