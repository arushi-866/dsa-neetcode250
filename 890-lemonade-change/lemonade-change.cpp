class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        int five = 0;
        int tens = 0;

        for (int num : bills) {
            if (num == 5) {
                five++;
            }
            else if (num == 10) {
                if(five==0){
                    return false;
                }
                tens++;
                five--;
            } else {
                if(tens>0 && five>0){
                    tens--;
                    five--;
                }
                else if(five>=3){
                    five-=3;
                }
                else return false;
            }
            
        }
        return true;
    }
};