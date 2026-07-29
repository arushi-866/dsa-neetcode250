class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total=0;
        int currMax=0;  int currMin=0;
        int maxSum=INT_MIN;     int minSum=INT_MAX;

        for(int num:nums){
            total+=num;

            currMax=max(currMax+num, num);
            maxSum=max(maxSum,currMax);

            currMin=min(currMin+num, num);
            minSum=min(minSum,currMin);

        }
        if(maxSum<0){
            return maxSum;
        }
        int circularSum=total-minSum;
        return max(maxSum, circularSum);
    }
};