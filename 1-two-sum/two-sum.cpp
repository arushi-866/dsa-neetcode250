class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> seen;
        for(int i=0;i<n;i++){
            int more= target-nums[i];

            if(seen.find(more)!=seen.end()){
                return {seen[more],i};
            }
            seen[nums[i]]=i;

        }
        return {};
    }
};