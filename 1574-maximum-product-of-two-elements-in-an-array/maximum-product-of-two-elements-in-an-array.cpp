class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp;
        for(int num : nums){
            temp.push_back(num-1);
        }
        sort(temp.begin(),temp.end());
        int t=temp.size();
        int ans=(temp[t-1])*(temp[t-2]);
        return ans;
    }
};