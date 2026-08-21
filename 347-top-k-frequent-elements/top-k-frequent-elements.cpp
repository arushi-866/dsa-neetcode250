class Solution {
public:
    typedef pair<int,int>P;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<P,vector<P>,greater<P>>pq;
        unordered_map<int,int>mpp;
        for(int num : nums){
            mpp[num]++;
        }
        for(auto it : mpp){
            pq.push({it.second,it.first});
            if(pq.size()>k) pq.pop();
        }
        vector<int>ans;
        while(!pq.empty()){
            pair<int,int> p = pq.top();
            pq.pop();

            ans.push_back(p.second);
        }
        return ans;
    }
};